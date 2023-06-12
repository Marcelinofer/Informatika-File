#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    string bulan[12] = {"Januari", "Feb", "Mar", "Apr", "Mei", "Juni", "Juli", "aug", "Sep", "Oct", "Nov", "Dec"};
    if(n <= 12){
         cout << bulan[n-1] << "\n";
    } else {
        cout << "Tidak ada bulan yang sesuai" << endl;
    }

    return 0;
}