#include <iostream>
using namespace std;

int main (){
	int bilangan;
	cin >> bilangan;
	if (bilangan == 0){
		cout << "nol" << endl;
	} else if (bilangan % 2 == 0 && bilangan > 0){
		cout << "genap positif" << endl;
	} else if (bilangan % 2 != 0 && bilangan > 0){
		cout << "ganjil positif" << endl;
	} else if (bilangan % 2 == 0 && bilangan < 0){
		cout << "genap negatif" << endl;
	} else {
		cout << "ganjil negatif" << endl;
	}
	return 0;
}
