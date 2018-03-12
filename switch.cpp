
#include<iostream>

using namespace std;

int main(){

    int input;

    cout << "Enter number between 0 to 5 : ";
    cin >> input;

    switch(input)
    {

        case 0:
            
            cout << "You have entered Zero"<< endl;
            break;

        case 1:

            cout << "You have entered One"<< endl;
            break;

        case 2:

            cout << "You have entered Two" << endl;
            break;

        case 3:

            cout << "You have entered Three" << endl;
            break;

        case 4:

            cout << "You have entered Four" << endl;
            break;

        case 5:

            cout << "You have entered Five" << endl;
            break;

        default:

            cout << "Incorrect choice." << endl;
            break;

    }
}
