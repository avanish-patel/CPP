#include<iostream>

using namespace std;

void add(int,int);
void sub(int,int);


int main(){

    add(23,23);
    sub(23,3);


    return 0;

}

void add(int a, int b){

    cout << a << "  + " << b << " = " << a+b << endl;

}

void sub(int a, int b){

    cout <<  a << " - " << b << " = " << a-b << endl;

}
