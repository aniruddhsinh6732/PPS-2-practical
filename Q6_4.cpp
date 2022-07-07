#include <iostream>
#include <cstring>
using namespace std;

class striing{
  char str[20];
public:
  void getdata(){
    cout << "enter a string : " ;
    cin >> str;
  }
  void dispdata(){
    cout << "string : " << str << endl;
  }
  void operator <(striing& ss){
    if(strlen(str) < strlen(ss.str)){
      cout << " true " <<endl;
    }else{
      cout << " false " <<endl;
    }
  }
  void operator >(striing& ss){
    if(strlen(str) > strlen(ss.str)){
      cout << " true" <<endl;
    }else{
      cout << " false " <<endl;
    }
  }
  void operator ==(striing& ss){
    if(str == ss.str){
      cout << "true" <<endl;
    }else{
      cout << "false" << endl;
    }
  }
  void operator !=(striing& ss){
    if(str != ss.str){
      cout << "true" <<endl;
    }else{
      cout << "false" << endl;
    }
  }
};

int main(){
  striing s1,s2;
  s1.getdata();
  s2.getdata();
  s1 > s2;
  s1 < s2;
  s1 == s2;
  s1 != s2;
  return 0;
}