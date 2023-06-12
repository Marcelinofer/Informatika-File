#include <iostream>
using namespace std;

int main(){ 
    string coklat[4][2] = {
        {"100", "200"}, 
        {"101", "345"}, 
        {"102", "220"},
        {"103", "1000"},
    };
    for(int i=0 ; i<4;i++){
            cout << coklat[i][0] << " : " << coklat[i][1] << endl;
        }
    return 0;
}