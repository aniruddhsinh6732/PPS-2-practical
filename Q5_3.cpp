#include <iostream>
#include <string.h>
using namespace std;

class catalog{
 char title[20],author[20];
  int year,qty;
public:
  catalog(){
    year = 0000;
    qty = 0;
  }
 ~catalog(){
   cout << "this is destructor" << endl;
 }
  void getdata(){
    cout  << " Enter data : " << endl;
    cout << "title : " ;
    cin >> title;
    cout << "author : " ;
    cin >> author ;
    cout << "year of publication : ";
    cin >> year;
    cout << "no. of copy : ";
    cin >> qty;
  }
  void dispdata(){
    cout << " title : " << title << endl;
    cout << " author : " << author << endl;
    cout << " year of publication : " << year << endl;
    cout << " no. of copy : " << qty << endl;
  } 
  void search(catalog b[]){
      {
        char text[20];
        cout << " enter text : " ;
        cin >> text;
        for(int i=0;i<15;i++)
        {
          if(strcmp(text,b[i].title)== 0)
          {
            dispdata();
          }
        }
        
      }
  }
};


int main(){
  catalog b[15],d;
  for(int i=0;i<15;i++)
    {
      b[i].getdata();
    }
  d.search(b);
  }