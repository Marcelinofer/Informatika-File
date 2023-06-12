#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
		a = x1 - x2;
		b = y1 - y2;
	if (a < 0){
		a = -x1 + x2;
	}
	if (b < 0){
		b = -y1 + y2;
		cout << a+b << endl;
	}
	return 0;
}
