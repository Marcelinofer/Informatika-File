#include <iostream>
using namespace std;

int main (){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};

    int length = sizeof(numbers)/sizeof(int);
    for (int i = 0; i < length; i++){
        cout << numbers[i] <<  " ";
    }
    cout << "\n";

    for(int number : numbers){
        cout << number << " ";
    }
    return 0;
}