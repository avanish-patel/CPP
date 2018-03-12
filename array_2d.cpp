#include<iostream>

using namespace std;

int main(){

    int array[2][5] = {
    
        {12,2,45,34,2},

        {56,32,23,24,6}
    
    
    };

    // outer loop prints numers of rows of array
    for(int i=0; i<2; i++){
        
        // inner loop prints numbers of colums of array
        for(int j=0; j<5; j++){

            cout << array[i][j] << " ";

        }

        cout << endl;
    }

    return 0;

}
