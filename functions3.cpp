#include<iostream>

using namespace std;

int add(int,int);
int sub(int,int);

int main(){

    int addition = add(12,4);
    int substraction = sub(12,4);

    cout << addition << endl;
    cout << substraction << endl;


    return 0;

}

int add(int a, int b){

    return a+b;

}

int sub(int a, int b){

    return a-b;
}

