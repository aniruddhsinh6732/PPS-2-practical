#include <iostream>
using namespace std;

class complex{
  int r,I;
public:
  complex(){
    r=I=0;
  }
  ~complex(){};
  void getdata(){
    cout << "enter real : ";
    cin >> r;
    cout << " enter imag : " ;
    cin >> I;
  }
  void dispdata(){
    cout << r << "+" << I <<"i" << endl;
  }
  complex add(complex& cc){
    complex temp;
    temp.r = r + cc.r;
    temp.I = I + cc.I;
    return temp;
  }
  complex sub(complex& cc){
    complex temp;
    temp.r = r - cc.r;
    temp.I = I - cc.I;
    return temp;
  }
  complex multi(complex& cc){
    complex temp;
    temp.r = (r * cc.r) - (I * cc.I);
    temp.I = (r * cc.I) + (cc.r * I);
    return temp;
  }
  complex div(complex& cc){
    complex temp;
    temp.r = ((r * cc.r) + (I * cc.I))/(((cc.r)*(cc.r)) + ((cc.I)*(cc.I)));
    temp.I = (cc.r * I) - (r * cc.I)/(((cc.r)*(cc.r)) + ((cc.I)*(cc.I)));
    return temp;
  }
};
int main(){
  complex c1,c2,c3,c4,c5,c6;
  c1.getdata();
  c2.getdata();
  c3 = c1.add(c2);
  c3.dispdata();
  c4 = c1.sub(c2);
  c4.dispdata();
  c5 = c1.multi(c2);
  c5.dispdata();
  c6 = c1.div(c2);
  c6.dispdata();
  return 0;
}