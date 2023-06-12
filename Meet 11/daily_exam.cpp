#include <iostream>
using namespace std;

int main (){
    int ds[101], N, Ni, res, counter = 0; //minta batas 100 bebek
    float avg;
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> ds[i];
        res += ds[i];
    }
avg = res/(N*1.0);
for (int i = 0; i < N; i++){
    if (ds[i] <= avg)
    counter++;

}
cout << counter << endl;

    return 0;
}