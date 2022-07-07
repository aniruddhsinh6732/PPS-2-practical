#include <iostream>
using namespace std;

int power(double m,int n=2)
{
  int ans = 1;
  while(n > 0)
    {
      ans = ans * m;
      n--;
    }
  return ans;
}

int main()
{
  int num,pow;
  cout << "enter a number : ";
  cin >> num;
  cout << "enter a power : ";
  cin >> pow;
  cout << num << "^" << pow << " : " << power(num,pow)<< endl;
}