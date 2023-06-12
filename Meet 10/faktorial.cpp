#include <iostream>
using namespace std;

int main (){
    int N, result =  1;

    cin >> N;
     if(N < 0){
         cout << "invalid" << endl;
        return 0;
     } else
    for (int i = N; i > 1; i--){
        result = result*i;
    }
    cout << result << endl;

    return 0;
}