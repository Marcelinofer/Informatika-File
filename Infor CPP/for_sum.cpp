#include <iostream>
using namespace std;

int main (){
	int orang, angka, jumlah;
	cin >> orang;
	jumlah = 0;
	for (int i = 1; i <= orang; i++){
		cin >> angka;
		jumlah += angka;
	}
	cout << jumlah << "\n";
	return 0;
}
