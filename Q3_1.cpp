#include <iostream>

void repchar(char c ='*',int n = 45)
{
  for(int i=0;i<n;i++)
  { 
    std::cout << c ;
  }
  std::cout << std::endl;
}

int main()
{
  char c ;
  int n;
  std::cout << "Enter a charecter : ";
  std::cin >> c;
  std::cout << "enter a no. of character you want :";
  std::cin >> n;
  repchar(c,n);
}
