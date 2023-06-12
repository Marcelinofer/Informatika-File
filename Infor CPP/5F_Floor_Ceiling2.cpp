#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double N;
	int F, C;
	cin >> N;
	if (N == trunc(N)){
		cout << trunc(N)<< " " << trunc(N) << endl;
	} else if (N < 0){
		cout << round(N) << " " << trunc(N) << endl;
	} else if (N > 0){
		cout << trunc(N) << " " << round(N) << endl;
	}
	return 0;
}
