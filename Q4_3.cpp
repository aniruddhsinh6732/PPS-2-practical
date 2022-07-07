#include <iostream>
using namespace std;

class book{
  string book_name;
  string author_name;
  float rate;
  int qty;
  double t_price; 
public:
  void getdata()
  {
    cout << "enter a book name : ";
    cin >> book_name;
    cout << "enter a author name : ";
    cin >> author_name ;
    cout << "enter a rate of book : ";
    cin >> rate ;
    cout << "enter a quntity of book : ";
    cin >> qty;
  }
  void total_price()
  {
    t_price = qty * rate ;
  }
  void displaydata()
  {
    cout << "book name : " << book_name << endl;
    cout << "author name : " << author_name << endl;
    cout << "rate : " << rate << endl;
    cout << "qty : " << qty << endl;
    cout << "total price : " << t_price << endl;
  }
};

int main()
{
   book b1;
   b1.getdata();
   b1.total_price();
   b1.displaydata();
}