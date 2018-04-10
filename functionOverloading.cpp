#include<iostream>

// function overloading - same name function with different parameters

void display();
void display(std::string);
void display(int,std::string);

int main(){

  display();
  display("Avanish");
  display(24,"Avanish");

  return 0;
}

void display(){

  std::cout << "Hello , Human!" << std::endl;
}

void display(std::string name){

  std::cout << "Hello, "<< name <<"!" << std::endl;
}

void display(int age, std::string name){

  std::cout << "Hello, "<<name <<", You are "<< age <<" old." <<std::endl;
}
