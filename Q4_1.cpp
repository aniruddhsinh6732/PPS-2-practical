#include <iostream>
class player {
  char name[20];
  int age, runs, hr, lr, tmatch;
  float avg;

public:
  void getdata() {
    std::cout << "Enter player data ";
    std::cout << "name : ";
    std::cin >> name;
    std::cout << "age : ";
    std::cin >> age;
    std::cout << "runs : ";
    std::cin >> runs;
    std::cout << "highest run : ";
    std::cin >> hr;
    std::cout << "lowest run : ";
    std::cin >> lr;
    std::cout << "total match played : ";
    std::cin >> tmatch;
  }
  void displaydata() {
    std::cout << "player data \n name : ";
    std::cout << name << std::endl;
    std::cout << "age : ";
    std::cout << age << std::endl;
    std::cout << "runs : ";
    std::cout << runs << std::endl;
    std::cout << "highest run : ";
    std::cout << hr << std::endl;
    std::cout << "lowest run : ";
    std::cout << lr << std::endl;
    std::cout << "total match played : ";
    std::cout << tmatch << std::endl;
    std::cout << "avg : " << avg << std::endl;
  }
  void average() { avg = (float)runs / tmatch; }
};

int main() {
  player p;
  p.getdata();
  p.average();
  p.displaydata();
}