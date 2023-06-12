#include <iostream>
using namespace std;

int main (){
	int N, counter = 0, brick;
	cin >> N;
	for (int i = 0;i < N; i++){
		for(int a = 0;a < N;a++){
				brick = counter % 10;
					cout << brick;
					counter +=1;
				}	
			cout << "\n";
			}
			return 0;
			}


