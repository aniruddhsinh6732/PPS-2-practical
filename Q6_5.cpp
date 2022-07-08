#include <iostream>
using namespace std;

class Distance{
  int feet;
  float inches;
public:
  Distance(){ feet=0; inches=0.0; }
  void getdata(){
    cout << "enter feet : " ;
    cin >> feet ;
    cout << "enter inches : ";
    cin >> inches;
  }
  void print(){
    while(inches > 12.0)
    {
      feet++;
      inches -= 12.0;
    }
    cout << "feet : " << feet << endl;
    cout << "inches : " << inches << endl;
  }
  bool operator >(Distance& dd)
  {
    float d1 = feet + inches/12;
    float d2 = dd.feet + dd.inches/12;
    return (d1 > d2) ? true : false;
  }
  bool operator <(Distance& dd)
  {
    float d1 = feet + inches/12;
    float d2 = dd.feet + dd.inches/12;
    return (d1 < d2) ? true : false;
  }
  bool operator ==(Distance& dd)
  {
    float d1 = feet + inches/12;
    float d2 = dd.feet + dd.inches/12;
    return (d1 == d2) ? true : false;
  }
  bool operator !=(Distance& dd)
  {
    float d1 = feet + inches/12;
    float d2 = dd.feet + dd.inches/12;
    return (d1 != d2) ? true : false;
  }
};

int main()
{
  Distance d1,d2;
  d1.getdata();
  d2.getdata();
  if(d1 > d2)
  {
    cout << "d1 is more longer than d2" << endl;
  }else{
    cout << "d2 is more longer than d1" << endl;
  }

  if(d1 < d2)
  {
    cout << "d2 is more longer than d1" << endl;
  }else{
    cout << "d1 is more longer than d2" << endl;
  }
  
  if(d1 == d2)
  {
    cout << "d1 and d2 are equal" << endl;
  }else{
    cout << "d1 and d2 are not equal" << endl;
  }

  if(d1 != d2)
  {
    cout << "d1 and d2 are not equal" << endl;
  }else{
    cout << "d1 and d2 are equal" << endl;
  }
  d1.print();
  d2.print();
}