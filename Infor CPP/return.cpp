#include <iostream>
using namespace std;

int main(){
	int number;
	bool looping = true;
	while(looping){
		cout << "Put your number here : ";
		cin >> number;
		if (number == 0){
			cout << "Lawak" << endl;
		} return 0;
		if (number < 0){
			cout << "Your number is  negative" << endl;
			looping = false;
		}
		cout << "Your number is " << number << endl;
	}
	cout << "Done!\n";
	return 0;
}
