#include <iostream>
using namespace std;

int main (){
	int N;
	cin >> N;
	
	
	while(N >= 1){
		if (N == 1){
			cout << "Iya\n";
			break;
		} else if (N % 2 == 0){
			N = N / 2;
		} else {
			cout << "Bukan\n";
			break;
		}
	}
	return 0;
}
