#include <iostream>
using namespace std;

class student{
  int rollno;
  string name;
  int mark[6];
  double per ;
  string clas;
public:
  void getdata()
  {
    cout << "enter a name of student : ";
    cin >> name;
    cout << "enter a roll no. : ";
    cin >> rollno;
    cout << "enter a class : ";
    cin >> clas;
    cout << "enter a mark in sub1 : ";
    cin >> mark[0];
    cout << "enter a mark in sub2 : ";
    cin >> mark[1];
    cout << "enter a mark in sub3 : ";
    cin >> mark[2];
    cout << "enter a mark in sub4 : ";
    cin >> mark[3];
    cout << "enter a mark in sub5 : ";
    cin >> mark[4];
    cout << "enter a mark in sub6 : ";
    cin >> mark[5];
  }
  void cal_per()
  {
    double temp=0;
    for(int i=0;i<6;i++)
      {
        temp = temp + mark[i];
      }
    per = temp/600;
  }
  void displaydata()
  {
    cout << "class : " << clas << endl ;
    cout << "student name : " << name <<endl;
    cout << "roll number : " << rollno << endl;
    cout << "percentage of six subject : " << per <<endl;
    for(int j=1;j<=6;j++)
      {
        cout << "mark of sub" << j << " : " << mark[j] << endl;
      }
  }
};


int main()
{
  student s1,s2;
  s1.getdata();
  s1.cal_per();
  s1.displaydata();

  s2.getdata();
  s2.cal_per();
  s2.displaydata();
}