#include<iostream>

using namespace std;

int main(){

    int age;
    string firstName, lastName;

    cout << "Enter your age : " ;
    
    cin >> age;

    cout << "Enter your first name: ";

    cin >> firstName;

    cout << "Eneter your last name: ";

    cin >> lastName;

    cout << "Hello, "<< firstName << " " << lastName << ", you are " << age << " years old." << endl;

    return 0;

}
