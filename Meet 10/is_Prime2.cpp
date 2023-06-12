#include <iostream>
using namespace std;

int main (){
    int N, faktor = 0;
    cin >> N;
    for (int i = N; i > 0;i++){
        if(N % i == 0)
            faktor++;
            if (faktor > 2){
            	cout << "Bukan Prima\n";
			} else if (faktor < 0){
				cout << "Bukan Prima\n";
			} else if (faktor == 1) {
				cout << "Bukan Prima\n";
			}break;
}
    cout << "Prima\n";
    return 0;
}
