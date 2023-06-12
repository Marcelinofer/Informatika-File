#include <iostream>
using namespace std;

int main (){
	int i;
	cin >> i;
	for (i ; i < 10; i++){
		if (i==5) continue;
		cout << i << "\n";
	}
	return 0;
}
