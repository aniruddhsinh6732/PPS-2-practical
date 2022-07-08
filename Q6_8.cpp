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
  complex operator +(complex& cc){
    complex temp;
    temp.r = r + cc.r;
    temp.I = I + cc.I;
    return temp;
  }
  complex operator -(complex& cc){
    complex temp;
    temp.r = r - cc.r;
    temp.I = I - cc.I;
    return temp;
  }
  complex operator *(complex& cc){
    complex temp;
    temp.r = (r * cc.r) - (I * cc.I);
    temp.I = (r * cc.I) + (cc.r * I);
    return temp;
  }
  complex operator /(complex& cc){
    complex temp;
    temp.r = ((r * cc.r) + (I * cc.I))/((cc.r)^2 + (cc.I)^2);
    temp.I = (cc.r * I) - (r * cc.I)/((cc.r)^2 + (cc.I)^2);
    return temp;
  }
  void operator +=(complex& cc){
    r += cc.r;
    I += cc.I;
  }
  void operator -=(complex& cc){
    r -= cc.r;
    I -= cc.I;
  }
  void operator *=(complex& cc){
    r *= cc.r;
    I *= cc.I;
  }
  void operator /=(complex& cc){
      r /= cc.r;
      I /= cc.I;
    }
};
int main(){
  complex c1,c2,c3,c4,c5,c6;
  c1.getdata();
  c2.getdata();
  c3 = c1 + c2;
  c3.dispdata();
  c4 = c1 - c2;
  c4.dispdata();
  c5 = c1 * c2;
  c5.dispdata();
  c6 = c1 / c2;
  c6.dispdata();
  return 0;
  c1 += c2;
  c1.dispdata();
  c1 -= c2;
  c1.dispdata();
  c1 *= c2;
  c1.dispdata();
  c1 /= c2;
  c1.dispdata();
}