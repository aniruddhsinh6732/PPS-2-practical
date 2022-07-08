#include <iostream>
using namespace std;

class time{
  int h,m,s;
public:
  time(){
    s = m = h = 0;
  }
  ~time(){
    cout << "END" << endl;
  }
  void getdata(){
    cout << "enter sec : " ;
    cin >> s;
  }
  void dispdata(){
    cout << "sec : " << s << endl;
    cout << "min : " << m << endl;
    cout << "hour : " << h << endl;
  }
  void convert(){
    while(s >= 60)
    {
       m++;
      s-=60;
    }
    while(m >= 60){
      h++;
      m-=60;
    }
  }
  time add(time &tt){
    time temp;
    temp.s = s + tt.s;
    temp.m = m + tt.m;
    temp.h = h + tt.h;
    return temp;
  }
};

int main(){
  class time t1,t2,t3;
  t1.getdata();
  t2.getdata();
  t1.convert();
  t2.convert();
  t1.dispdata();
  t2.dispdata();
  t3 = t1.add(t2);
  t3.dispdata();
}