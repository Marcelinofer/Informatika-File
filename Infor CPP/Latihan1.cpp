#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float A, phi, R;
	phi = 3.14159;
	cin >> R;
	cout << fixed << setprecision(4) << (phi*R*R)<< endl;
	
	return 0;
}
