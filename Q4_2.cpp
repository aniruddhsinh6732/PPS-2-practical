#include <iostream>
using namespace std;

class item{
  int item_code;
  float cost;
  int qty;
  double total_price;
public:
  void getdata()
{
  cout << "enter a item code : ";
  cin >> item_code;
  cout << "enter a cost : ";
  cin >> cost;
  cout << "enter a quntity : ";
  cin >> qty;
}
void totalprice()
{
  total_price = qty * cost ;
}
void displaydata()
{
  cout << "item code : " << item_code <<endl;
  cout << "cost : " << cost <<endl;
  cout << "quntity : " << qty << endl;
  cout << "total price : " << total_price << endl;
}
};

int main()
{
  item i;
  i.getdata();
  i.totalprice();
  i.displaydata();
}