#include <iostream>
#include <string.h>
using namespace std;

class student{
  int roll;
  int mark[6];
  float per;
  char name[20],cls[2];
public:
  void getdata(){
    cout << "enter a name of student : ";
    cin >> name;
    cout << "enter a roll no. : ";
    cin >> roll;
    for(int i=0;i<6;i++)
      {
        cout << "enter marks of sub" << i+1 << " : ";
        cin >> mark[i];
      }
  }
  void calper(){
    int temp=0;
    for(int i=0;i<6;i++){
      temp += mark[i];
    }
    per = temp/6;
  }
  void dispdata(){
    cout << "class : " << cls << endl ;
    cout << "student name : " << name <<endl;
    cout << "roll number : " << roll << endl;
    cout << "percentage of six subject : " << per << endl;
  }
  void sort(student s[],int n){
    for(int i=0;i<n-1;i++)
      {
        for(int j=i+1;j<n;j++)
          {
            if(s[i].per > s[j].per)
            {
              student temp = s[i];
              s[i] = s[j];
              s[j] = temp;
            }
          }
      }
  } 
  void clas(){
    if(per>80 && per<=100)
    {
      strcpy(cls,"1");
    }else if(per<80 && per>60){
      strcpy(cls,"2");
    }else if(per<60 && per>30){
      strcpy(cls,"3");
    }else{
      strcpy(cls,"F");
    }
  }
};

int main(){
  int n = 10;
  student s[n],d;
  for(int i=0;i<n;i++)
    {
      s[i].getdata();
      s[i].calper();
      s[i].clas();
    }
  s[1].sort(s,n);
  for(int i=0;i<n;i++)
    {
      s[i].dispdata();
    }
}