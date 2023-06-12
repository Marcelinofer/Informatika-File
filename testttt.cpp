#include <iostream>
using namespace std;

int main(){
    int N, a;
    cin >> N;
    for (a=N; a>0;a--){
        if(N%a==0){
            cout << a << " ";
        }
    }
cout <<endl;
    return 0;
}