#include <iostream>

union point{

    int x;
    int y;
};

int main(int argc, char const *argv[])
{

    // the memory is going to shared during compile time between x and y
    // so when we change the value of one member another mebebers value also change

    point p;

    p.x = 20;

    std::cout << p.x << std::endl;
    std::cout << p.y << std::endl;

    p.y = 300;

    std::cout << p.x << std::endl;
    std::cout << p.y << std::endl;


    return 0;
}
