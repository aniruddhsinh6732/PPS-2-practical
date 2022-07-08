#include <iostream>
#include <cstring>
using namespace std;

class stringg{
  char str[20];
public:
  stringg(){
    strcpy(str,"     ");
  }
  ~stringg(){ };
  void getdata(){
    cout << "enter a string : ";
    cin >> str;
  }
  void dispdata(){
    cout << "string : " << str;
  }
  void concatenate(stringg s2){
   strcat(str,s2.str);
  }
};

int main(){
  stringg s1,s2;
  s1.getdata();
  s2.getdata();
  s1.concatenate(s2);
  s1.dispdata();
}