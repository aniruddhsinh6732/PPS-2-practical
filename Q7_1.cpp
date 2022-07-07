#include <iostream>
#include <iomanip>
using namespace std;

class tons{
  float ton;
public:
  tons()
  {
    ton = 0;
  }
  tons(float n)
  {
    ton =  n;
  }
  float getton()
  {
    return ton;
  }
  void display(){
    cout << "ton : " << fixed << setprecision(5)<<ton << endl;
  }
};

class kilo{
  float kg,gms;
public:
  kilo(float k,float g)
  {
    kg = k;
    gms = g;
  }

  kilo (tons t)
  {
    kg = t.getton() * 1000 ;
    gms = (kg - (int)kg)*1000 ;
  }

  operator tons(){
    tons temp; 
    temp = (kg /1000) + (gms/1000000);
    return temp;
  }
  void print(){
    cout << " kg : " << (int)kg << endl;
    cout << " gms : " << gms << endl;
  }
};

int main(){
  tons a = 1.75685 ;
  a.display();
  kilo r = a;
  r.print();
  tons y = r;
  y.display();
}