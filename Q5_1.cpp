#include <iostream>

class player
{
  char name[20],t_name[10];
  float b_avg;
  float* ptr;
public:
  void getdata();
  void displaydata();
  void sort_b(player);
  void sort_t();
  void sort(player  p[])
  {
     for(int i = 0 ; i < 9 ; i++)
       {
         for(int j = i+1 ; j<10 ; j++)
           {
             if(p[i].b_avg>p[j].b_avg)
             {
               player temp = p[i];
               p[i]=p[j];
               p[j]=temp;
             }
           }
       }
  }
  
};

void player::getdata()
{
  
  std::cout << "enter data : \n";
  std::cout << "enter name : ";
  std::cin >> name ;
  std::cout << "enter team name : \n";
  std::cin >> t_name;
  std::cout << "enter batting average : \n";
  std::cin >> b_avg;
 
}

void player::displaydata()
{
  std::cout << "data : \n";
  std::cout << "name : ";
  std::cout << name << std::endl;
  std::cout << "team name : ";
  std::cout << t_name << std::endl;
  std::cout << "batting average : ";
  std::cout << b_avg << std::endl;
}

int main()
{
  player p[10];
  for(int i=0;i<10;i++)
    {
      p[i].getdata();
    }
  p[1].sort(p); 
   for(int i=0;i<10;i++)
    {
      p[i].displaydata();
    }
   
}
