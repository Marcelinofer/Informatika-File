#include <bits/stdc++.h>
using namespace std;

int main(){
	float N;
	int F, C;
	cin >> N;	
		double number = N;
		F = round(N);
		C = F+1;
		cout << F << " " << C << endl;
		F = round(N);
		C = F-1;
		cout << F << " " << C << endl;
		
	return 0;
}
