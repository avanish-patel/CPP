#include<iostream>

using namespace std;

void welcome(){

    cout << "Welcome to C++ programming" << endl;

}

void printline(){

    cout << "--------------------------------------------------" <<endl;

}

void newline(){

    cout << endl;

}

int main() {
    
    printline();
    newline();
    welcome();
    newline();
    printline();

    return 0;

}
