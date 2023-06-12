#include <bits/stdc++.h>
using namespace std;

int main (){
	int a, b, c;
	float x1, x2, d;
	cin >> a;
	cin >> b;
	cin >> c;
	
	d = b*b - (4*a*c);
	
	if(d>0){
		x1 = (b + sqrt(d))/(2*a);
		x2 = (b - sqrt(d))/(2*a);
		cout << x1 << endl;
		cout << x2 << endl;
	} else if (d == 0){
		x1 = b/(2*a);
		x2 = x1;
		cout << "akar kembar" << endl;
		cout << "akar x1 = x2 yaitu " << x1 << endl;
	}
	else {
		cout << "akar x1 bilangan imajiner" << endl;
		cout << "akar x2 bilangan imajiner" << endl; 
	}
	
	return 0;
}
