#include <iostream>
using namespace std;

int main (){
	unsigned int N;
	cin >> N;
	if(N > 0 && N < 10){
		cout << "satuan" << endl;
	} else if (N >= 10 && N <100){
		cout << "puluhan" << endl;
	} else if (N >= 100 && N < 1000){
		cout << "ratusan" << endl;
	} else if (N >= 1000 && N < 10000){
		cout << "ribuan" << endl;
	}  else {
		cout << "puluhribuan" << endl;
	}
	return 0;
}
