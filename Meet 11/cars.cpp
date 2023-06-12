#include <iostream>
using namespace std;

int main (){
    string cars [] = {"A", "B", "C", "D"};
    
    // cout << cars[0] << "\n";
    // cars[1]= "E";
    // cout << cars[1] << "\n";
    
    for(int i = 0; i<4; i++){
        cout << cars[i] << endl;
    }

    for (string car : cars){
        cout << car << "\n";
    }
    
    return 0;
}