#include <iostream>
using namespace std;

class date{
  int day,month,year;
public:
  date(){
    day = month = year = 0;
  }
  ~date(){
    cout << "END" << endl;
  }
  void getdate(){
    cout << "day : " ;
    cin >> day;
    cout << "month : ";
    cin >> month;
    cout << "year : ";
    cin >> year;
  }
  void setdate(int d=0,int m=0,int y=0){
    day = d;
    month = m;
    year = y;
  }
  void dispdate(){
    cout << day << "/" << month << "/" << year << endl;
  }
  void nextday()
  {  
    if(year % 4 == 0)
    {     
      if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
        {
          if(day==31)
            {
              day = 1;
              month++;
            }else
            {
              day++; 
            }
        }
        else if(month == 2)
        {
          if(day == 29)
            {
              day =1;
              month++;
            }else
            {
              day++;
            }
        }
        else
        {
          if(day == 30)
          {
            day = 1;
            month++;
          }else
          {
          day++;
          }
        }
      }
      else
      {
        if(month==1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
        {
            if(day == 31)
            {
              day = 1;
              month++;
            }else{
              day++;
            }
        }else if(month == 2){
            if(day==28){
              day = 1;
              month++;
            }else{
              day++;
            }
        }else{
            if(day == 30){
              day = 1;
              month++;
            }else{
              day++;
            }
        }
      } 
    }
  
};

int main(){
  date d;
  d.getdate();
  d.dispdate();
  d.nextday();
  d.dispdate();
}