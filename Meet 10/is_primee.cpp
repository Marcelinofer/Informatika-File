#include <iostream>
using namespace std;

int main(){
	int N, faktor = 0;
	cin >> N;
	if ( N < 2 ){
		cout << "BUKAN PRIMA\n";
		return 0;
	}	
	else {
		for (int i = N; i > 0; i++){
				if ( N % i == 0){
					i;
				}
				if ( i > 2 ){
					cout << "BUKAN PRIMA\n";
					break;
				}
				if ( i == 1 or i < 0){
					cout << "BUKAN PRIMA\n";
					break;
				}
			cout << "PRIMA\n";
			break;
		}
	}
	return 0;
}
