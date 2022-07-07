#include <iostream>


int main()
{
  int r,c,i,j;
  std::cout << "enter a matrix size :";
  std::cin >> r >> c; 
  int m1[r][c];
  int m2[r][c];
  std::cout << "enter a values for m1 : \n";
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          std::cin >> m1[i][j];
        }
    }
  std::cout << "enter a values for m2 : \n";
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          std::cin >> m2[i][j];
        }
    }
  std::cout << "sum of m1 and m2 : \n";
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
        {
          std::cout << m1[i][j] + m2[i][j] << " ";
        }
      std::cout << std::endl;
    }  
}
