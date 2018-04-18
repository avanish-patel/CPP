#include <iostream>
#include <string>

class Human{

public:
    std::string name;
    void introduce();

};

// using scope resolution operator to access class members

void Human::introduce(){

    std::cout << Human::name << std::endl;
}

int main(int argc, char const *argv[])
{
    Human avanish;

    avanish.name = "Avanish Patel";
    avanish.introduce();

    return 0;
}
