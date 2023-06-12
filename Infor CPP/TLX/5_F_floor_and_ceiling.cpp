#include <iostream>
#include <cmath>
using namespace std;

int main (){
	float N;
	int F, C;
	cin >> N;
	if (N == trunc(N)){
		cout << trunc(N)<< " " << trunc(N) << endl;
	} else if (N < 0){
		cout << ceil(N) << " " << trunc(N) << endl;
	} else{
		cout << round(N) << " " << trunc(N) << endl;
	}
	return 0;
}
