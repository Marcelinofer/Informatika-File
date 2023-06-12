#include <iostream>
using namespace std;

int main (){
    int N, faktor = 0;
    cin >> N;
	for (int i = 1; i <= N;i++)
		 if(N % i == 0){
            faktor++;
        }
        if (faktor == 2){
        cout << "Prima\n"; 
		}else{
			cout << "Bukan Prima\n";
		}
    return 0;
}
