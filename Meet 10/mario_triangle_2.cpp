#include <iostream>
using namespace std;

int main (){
	short N;
	cin >> N;

	for (int K = 0; K < N; K++){
	  	for(int J = 0; J < N; J++){
    		if(K == 0){
    			cout << " ";
		}else{
			if (K+J >= N - 1)
				cout << "#";
			else
				cout << " ";
		}
	}
	cout << "\n";
}
	return 0;
}
