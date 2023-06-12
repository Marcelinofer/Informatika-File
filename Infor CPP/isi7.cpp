#include <iostream>
using namespace std;

int main (){
int x = 10, y = 10;
x = x*x;
y = x;
if (x < y) x = y - 1;
else if (x > y) x = y + 1;
else x /= x;

cout << x << endl;
    return 0;
}