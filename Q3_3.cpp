#include <iostream>
using namespace std;

int& zerosmaller(int& x,int& y)
{
  if(x>y)
    return y;
  else
    return x;
}
int main()
{
  int a,b;
  cout << "get value of a & b :" << endl;
  cout << " a : ";
  cin >> a;
  cout << " b : ";
  cin >> b;
  cout << "before : " ;
  cout << "a : " << a <<" ,b : " << b << endl;
  zerosmaller(a,b) = 0;
  cout << "after : " ;
  cout << "a : " << a <<" ,b : " << b << endl;
}