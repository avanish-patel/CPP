#include<iostream>

using namespace std;

int main(){

    for(int i=0; i<10; i++){
        
        // if value of i == 6 , than it will break the loop
        if(i == 6)
            break;

        cout << i << endl;

    }
    return 0;
}
