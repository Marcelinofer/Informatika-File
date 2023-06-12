#include <iostream>
using namespace std;

int main (){
int a = 100, b = 50;
do {
    b--;
    a+= b;
} while (a > b);
cout << a << " " << b << endl;
    return 0;
}
