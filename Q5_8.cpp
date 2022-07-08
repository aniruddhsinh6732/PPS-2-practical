#include <iostream>
using namespace std;

class distance{
  int feet;
  float inches;
public:
  distance(){
    feet = 0;
    inches = 0.0;
  }
  ~distance(){
    cout << "END" << endl;
  }
  void getdata(){
    cout << "enter a feet : " ;
    cin  >> feet;
    cout << "enter a inches : ";
    cin >> inches;
  }
  void dispdata(){
    cout << "feet : " << feet <<endl;
    cout << "inches : " << inches <<endl;
  }
  void convert(){
    while(inches >= 12.0)
      {
        feet++;
        inches-=12.0;
      }
  }
  distance add(distance &dd){
    distance temp;
    temp.feet = feet + dd.feet;
    temp.inches = inches + dd.inches;
    return temp;
  }
};

int main(){
  class distance d1,d2,d3;
  d1.getdata();
  d2.getdata();
  d1.convert();
  d2.convert();
  d1.dispdata();
  d2.dispdata();
  d3 = d1.add(d2);
  d3.dispdata();
}