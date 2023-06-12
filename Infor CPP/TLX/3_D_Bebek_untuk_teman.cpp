#include <iostream>
using namespace std;

int main(){
	unsigned int N, M;
	cin >> N >> M;
	cout << "Masing-Masing" << N/M << endl
		 << "Bersisa " << N%M << endl;
	return 0;
}
