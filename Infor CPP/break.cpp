#include <iostream>
using namespace std;

int main(){
	string text;
	while (true){ // text != "stop"
	cout << "Put your text here : ";
	getline(cin, text);
	if(text == "stop"){
		break;
	}
	cout << text << endl;
	}
	return 0;
}
