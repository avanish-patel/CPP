#include<iostream>
#include<string>
class Human{
public:

  int id;
  std::string name;

  void printHuman(){

    std::cout << "Id : "<< id << " Name : "<< name  << std::endl;

  }

};

// main method
int main(){

  Human avanish;

  avanish.id = 102;
  avanish.name = "Avanish";
  avanish.printHuman();



  return 0;
}
