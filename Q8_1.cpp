#include <iostream>
using namespace std;

class circle{
protected:
  float r;
public:
  circle(int i){ r=i; }
  float area(){
    return (3.14*r*r) ;
  }
};

class cylinder:public circle
{
protected:
  float h;
public:
  cylinder(float a,float b):circle(a)
  {
    h = b;
  }
  float volume(){
    return (3.14*r*r*h);
  }
};

int main(){
  circle c(10);
  cout << "area of circle is " << c.area() << endl;
  cylinder a(5,3);
  cout << "volume of cylinder is " << a.volume() << endl;
}