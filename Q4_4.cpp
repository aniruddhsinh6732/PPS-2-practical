#include <iostream>
using namespace std;

class time{
  int sec,min,hour;
public:
  void getdata()
  {
    cout << "enter a second : ";
    cin >> sec ;
  }
  void setdata(int s)
  {
    sec = s;
  }
  void convert()
  {
    min =0;
    hour =0;
    while(sec >= 60)
    {
      min++;
      sec = sec - 60;
    }
    while(min >= 60)
      {
        hour++;
        min = min - 60;
      }
  }
  void displaydata()
  {
    cout << " hour:min:sec ---> " << hour <<":"<< min <<":" << sec << endl ;
  }
};

int main()
{
  class time t1,t2;
  
  t1.getdata();
  t1.convert();
  t1.displaydata();

  t2.setdata(3600);
  t2.convert();
  t2.displaydata();
}