#include <iostream>
using namespace std;

int main(){
	int a = 2, b = 5;
	int tmp = 2*b;
	b = 2*a;
	a = tmp;
	cout << b << " " << a;
	return 0;
}
