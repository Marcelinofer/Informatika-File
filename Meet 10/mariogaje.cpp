#include <iostream>
using namespace std;

int main (){
	for (int K = 0; K < 10; K++){
	  	for(int J = 0; J < 10; J++){
	  		if(K == 0){
	  			cout << ".";
			  } else 
    		if(K + J >= 9){
    			cout << "#";
		}else{
			cout << ".";
		}
	}
	cout << "\n";
}
	return 0;
}
