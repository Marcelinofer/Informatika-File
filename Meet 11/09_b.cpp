#include <iostream>
using namespace std;

int main (){
    int counter = 0; 
	int angka;
	int arr[101];

    while (cin >> angka){
        arr[counter] = angka;
        counter++;
    }

    for(int i = counter - 1; i >= 0; i--){
        cout << arr[i] << endl;
    }
    return 0;
}
