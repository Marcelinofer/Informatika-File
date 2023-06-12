#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double A, T;
	cin >> A >> T;
	cout << fixed << setprecision(2) << (A*T/2) << endl;
	return 0;
}
