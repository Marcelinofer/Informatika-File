#include <bits/stdc++.h>
using namespace std;

double find_area(double A, double T){
    double res = (A*T)/2;
    return res;
}

double find_perimeter(double A, double T, double C){
    double akl = (A + T + C);
    return akl;
}

int main (){
    
    double A = 3, T = 4, C = 5;
    double luas_segitiga = find_area(A, T);
    cout << luas_segitiga << endl;

    double a = 3, t = 4, c = 5;
    double kell_segitiga = find_perimeter(A, T, C);
    cout << kell_segitiga << endl;
    return 0;
}