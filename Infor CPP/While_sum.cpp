#include <iostream>
using namespace std;

int main(){
	int kandang, bebek, jumlah = 0;
	cin >> kandang;
	while(kandang > 0){
		cin >> bebek;
		jumlah += bebek;
		kandang--;
	}
	cout << jumlah << endl;
	return 0;
}
