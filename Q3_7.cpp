#include <iostream>
#include <iomanip>

using namespace std;

void convert(char s,int a)
{
  int x;
  x = (int)s;
  cout << x << endl;
}
void convert(char s, float a)
{
  float y;
  y = (float)s;
  cout << fixed<< setprecision(2)<< y << endl;
}
int main()
{
  char s;
  float f = 1.1;
  cout << "enter a ascii : ";
  cin >> s;
  convert(s, 1);
  convert(s, f);
}