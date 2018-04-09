#include<iostream>

struct student{

  int id;
  char group;

};

int main(){


  student s1,s2;

  s1 = {192, 'A'};

  s2.id= 194;
  s2.group = 'C';

  std::cout << s1.id << " "<< s1.group <<std::endl;

  std::cout << s2.id <<" " << s2.group <<std::endl;

}
