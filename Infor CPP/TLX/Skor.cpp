#include <iostream>
using namespace std;

int main (){
	float nilai;
	cin >> nilai;
	if (nilai >= 0 && nilai <=100){
		if (nilai >= 0 && nilai < 70){
		cout << "Nilai D" << endl;
	} else if (nilai >= 90 && nilai <= 100){
		cout << "Nilai A" << endl;
	} else if (nilai >= 80 && nilai < 90){
		cout << "Nilai B" << endl;
	} else {
		cout << "Nilai C" << endl;
	}
	}
	
	return 0;
}
