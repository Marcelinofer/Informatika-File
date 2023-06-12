#include <iostream>
using namespace std;

int main (){
	int N, faktor;
	cin >> N;
	for (int i = N; i > 0; i++)
	if(N % i == 0)
		faktor++;
	if (faktor > 2){
		cout << "Bukan Prima\n";
	} else if(faktor < 0){
		cout << "Bukan Prima\n";
	} else if(faktor == 2){
		cout << "Prima\n";
	}
	cout << "Prima\n";
	return 0;
}
