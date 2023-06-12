#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numbers_arr[5] = {1,2, 3, 4, 5};
    vector<int> numbers_vect = {10, 20, 30, 40, 50};
    // // number_vect.push_back(10); untuk dev cpp;
    // sampe 50

    // print vector
    for(int i = 0; i< numbers_vect.size();i++){
        cout << numbers_vect[i] << " "; //untuk nampilin 10 - 50.
    }
    cout << endl; //ini digunakan agar print di line baru.
    //vector -> memakai konsep step = LIFO (Last in First Out)
    // Kalo Queue -> menggunakan konsep FIFO-> First In First Out

    // delete item in vector.

    for (int i = 0; i < numbers_vect.size(); i++){
        cout << numbers_vect[i]<< " ";
    }
    cout << endl;

    // insert item into vector
    vector<string> cars;
    cars.push_back("A");
    cars.push_back("B");
    cars.push_back("C");
    cars.push_back("D");
// ini untuk nambahin
    cars.insert(cars.begin()+1, "Wlee");
    cars.insert(cars.end()-1, "Masbro");
    
    for (int i = 0; i < cars.size(); i++){
        cout << cars[i]<< " ";
    }
    cout << endl;

// erease item from vector ini untuk hapus
cars.erase(cars.begin()+4);
for(int i = 0; i < cars.size(); i++){
    cout << cars[i] << " ";
}
    return 0;
}