#include <iostream>
using namespace std;

int main (){
	int bebek, kandang, jumlah;
	cin >> bebek;
	jumlah = 0;
	for (int i = 1; i <= bebek; i++){
		cin >> kandang;
		jumlah += kandang;
	}
	cout << jumlah << "\n";
	return 0;
}
