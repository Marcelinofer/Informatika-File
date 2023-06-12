#include <iostream>
using namespace std;

int main(){
    int myNummbers[5]={10, 20, 30, 40, 50};
    cout << sizeof(myNummbers);

    for (int i = 0; i < sizeof(myNummbers)/sizeof(int) ; i++){
        cout << myNummbers[i] << endl;
    }

    for (int number : myNummbers){
        cout << number << endl;
    }
    return 0;
}