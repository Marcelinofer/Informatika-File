#include <iostream>
using namespace std;

int main (){
int x = 3, y = 4;
x += y;
y = x - y;
x -= y;
cout << x << " " << y << endl;
    return 0;
}