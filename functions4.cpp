#include<iostream>

using namespace std;

void defaultAddition(int a, int b, int c = 10){

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "a+b+c = " << a+b+c << endl;

}

int main(){

    cout << "with default value of third parameter "<< endl;

    defaultAddition(5,5);

    cout << "with all value "<< endl;

    defaultAddition(5,5,5);

    return 0;

}
