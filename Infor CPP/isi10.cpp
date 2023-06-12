#include <iostream>
using namespace std;

int main (){
int ayam = 100, bebek = 5;
do {
    bebek += bebek;
    ayam -= bebek;
} while (ayam > bebek);
cout << bebek << " dan " << ayam << endl;
    return 0;
}