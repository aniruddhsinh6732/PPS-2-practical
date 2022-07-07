#include <iostream>
using namespace std;

int sum(int n1,int n2,int n3)
{
  return n1+n2+n3;
}

int main()
{
  int n1,n2,n3;
  cout << "sum of three numbers :" << endl;
  cout << "enter a n1:" ;
  cin >> n1;
  cout << "enter a n2:" ;
  cin >> n2;
  cout << "enter a n3:" ;
  cin >> n3;
  cout << "sum of n1,n2 & n3 is : "<< sum(n1,n2,n3)<<endl;
}