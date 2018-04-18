#include<iostream>
#include<string>

class Person{

public:

    std::string name;

    void introduce(){

        std::cout << "Hello, " << name << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    // avanish of type person is created into stack
    Person avanish;

    avanish.name = "Avanish";
    avanish.introduce();

    // dixit of type person is created into heap

    Person *dixit = new Person();

    dixit->name = "Dixit";
    dixit->introduce();

    delete dixit;
    dixit = nullptr;


    return 0;
}
