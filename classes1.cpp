#include<iostream>

class Student{

    public:

        std::string name;

        void introduce(){

            std::cout << "Hello, " << name << "!" <<std::endl;
        }
};

int main(){

    Student avanish, dixit, raj;

    avanish.name ="Avanish";
    avanish.introduce();

    dixit.name ="Dixit";
    dixit.introduce();

    raj.name = "Raj";
    raj.introduce();
    
    return 0;
}

