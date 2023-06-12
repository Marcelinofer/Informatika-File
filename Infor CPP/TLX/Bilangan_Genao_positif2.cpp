#include <iostream>
using namespace std;
	
int main (){
	int bilangan;
	cin >> bilangan;
	if (bilangan == 0){
		cout << "nol" << endl;
	} else if (bilangan % 2 == 0){
		if(bilangan > 0){
			cout << "Genap Positif" << "\n";
		} else {
			cout << "Genap Negatif" << "\n";
		}
	} else {
		if (bilangan > 0){
			cout << "ganjil positif" << "\n";
		} else {
			cout << "ganjil negatif" << "\n";
		}
	}
	return 0;
}
