#include<iostream>

using namespace std;
// global variable accesible through program
int a =10;

void display(){
    
    // variable a local to function display only,can't accesible outside of function
    int a = 25;

    cout << "a = " << a << endl;

}

void increment(){

    a++;
    cout << "a++ = " << a << endl;
}

int main(){


    cout << "a from funciton display , local scope"<< endl;
    display();

    cout << "a from global scope, calling increment on global variable" << endl;

    cout << "a = " << a << endl;

    increment();
    increment();
    increment();


    return 0;

}
