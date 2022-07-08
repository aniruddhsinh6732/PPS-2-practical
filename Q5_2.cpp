#include <iostream>
using namespace std;

class book{
  char name[20],a_name[20];
  int qty,price,total;
public:
  book(){qty=0; price = 0; total = 0;}
  ~book(){cout << "This is a Destructor";}
  void getdata(){
    cout << "enter a data : " << endl ;
    cout << "book name : " ;
    cin >> name;
    cout << "author name : " ;
    cin >> a_name ;
    cout << "qty : ";
    cin >> qty;
    cout << "price : ";
    cin >> price ;
  }
  void tprice(){
    total = qty * price ;
  }
  void sort(book b[]){
    for(int i = 0 ; i < 9 ; i++)
       {
         for(int j = i+1 ; j<10 ; j++)
           {
             if(b[i].total>b[j].total)
             {
               book temp = b[i];
               b[i]=b[j];
               b[j]=temp;
             }
           }
       }
    }
    void dis(){
      cout << "book name : " << name << endl;
      cout << "author name : " << a_name << endl;
      cout << "qty : " << qty << endl;
      cout << "price : " << price << endl;
      cout << "total price : " << total << endl;
    }
};

int main(){
  book b[10];
  for(int i=0;i<10;i++)
  {
    b[i].getdata();
    b[i].tprice();
  }
  b[1].sort(b);
  for(int i=0;i<10;i++)
  {
    b[i].dis();
  }
}