#include <iostream>
using namespace std;

int main(){
int a = 3, b = 5, c = 8, tmp;
if (a > b){
    if (c > a){
        tmp = c;
    } else {
        tmp = a;
    }
} else {
    if (c > b){
        tmp = c;
    } else {
        tmp = b;
    }
}
cout << tmp;
    return 0;
}