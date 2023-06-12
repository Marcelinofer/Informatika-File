#include <iostream>
using namespace std;

int  main (){
	string fullname;
	bool stop = false;
	while (not stop){
		cout << "Put your name here : ";
		getline(cin, fullname);
		if (fullname == "exit") stop = true;
		else cout << fullname << endl;
	}
	return 0;
}
