typedef unsigned long long ull;

ull count_checkerboard(ull width, ull height, ull resolution) 
{
  if (width == 0 || height == 0)
  {
    return 0;
  }
  ull size = resolution;
  ull r_w = width % size;
  ull r_h = height % size;
  
  ull f_w = width - r_w;
  ull f_h = height - r_h;
  
  ull result = 0;
  ull block_w = f_w / size;
  ull block_h = f_h / size;
  
  for (ull i = 0; i < block_w; i++)
  {
    for (ull j = 0; j < block_h; j++)
    {
      if ((i + j) % 2 == 1)
      {
        result += size*size;
      }
    }
  }
  
  if (block_h % 2 != 0 && block_w % 2 != 0) // оба нечетные
  {
      result += r_w * ((block_h / 2) + 1) * size;
      result += r_h * ((block_w / 2) + 1) * size;        
  }
  
  else if (block_h % 2 == 0 && block_w % 2 == 0)  // оба четные
  {
    result += r_w * (block_h / 2) * size;
    result += r_h * (block_w / 2) * size;
  }
  
  else if (block_h % 2 != 0 && block_w % 2 == 0 )
  {
    result += r_w * (block_h / 2) * size;
    result += r_h * (block_w / 2) * size;
    result += r_h * r_w;
  }
  
  else if (block_w % 2 != 0 && block_h % 2 == 0 && width > size && height > size)
  {
    result += r_h * (block_w / 2) * size;
    result += r_w * (block_h / 2) * size;
    result += r_h * r_w;
  }
  
  else if (width < size || height < size)
  {
    if (width < size)
    {
      
      if (block_h % 2 == 0)
      {
        result += width * (block_h / 2);
        result += r_h * width;
      }
      
      if (block_h % 2 != 0)
      {
        result += width * (block_h / 2);
        result += r_h * width;
      }
    }
    
    else if (height < size)
    {
      
      if (block_w % 2 == 0)
      {
        result += height * (block_w / 2) * size;
        result += r_w * height;
      }
      
      if (block_w % 2 != 0)
      {
        if (block_w == 1)
        {          
          result += r_w * height;
        }
        else
        {
          if (block_w == 3)
          {
            result += height * size;
            result += r_w * height;
          }
          else
          {            
            result += height * (block_w / 2) * size;
            result += r_w * height;
          }
        }
      }
    }
  }
  
  
  return result;
}
