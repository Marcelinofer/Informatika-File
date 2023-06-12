/*
Program ini dibuat oleh Marcelino Fernandez tanggal 12/01/2023
*/
#include <iostream>
using namespace std;

int main (){
    short N;
    cin >> N;
    for(int i = 1; i<=N; i++){
        if(i == 42){
            cout << "ERROR\n";
            break;
        }
        if(i % 10 != 0)
        cout << i << "\n";
    }
    return 0;
}