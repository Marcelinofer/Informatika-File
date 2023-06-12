#include <iostream>
#include <vector>
using namespace std;

int main(){
    // string names[4] = {};
    // string dorms[4] = {}; // dak usa tulis kek ini hanya untuk single

    
    // //ada array dalam array (yang 2) sederhananya 4 baris 2 kolom.
    // string students[4][2] = {
    //     {"Wlee", "Gryffindor"}, //mulai dari kolom 0 jadi ini 0 yang namo namo wlee sampe draco itu 4 kolom, yg griffindor sampe slytren itu 2 baris
    //     {"Masbro", "Gryffindor"},
    //     {"Ron", "Gryffindor"},
    //     {"Draco", "Slytherin"},
    // };
    
    // cout << students[3][0] << " : " << students[3][1] << endl;

    vector<vector<string>> students_vect = {
        {"Wlee", "Gryffindor"},
        {"Masbro", "Gryffindor"},
        {"Ron", "Gryffindor"},
        {"Draco", "Slytherin"},
    };

    vector<string> student;
    student.push_back("cedric");student.push_back("Hapelpaf");

    students_vect.push_back(student);
    cout << students_vect[0][1] << " : " << students_vect[0][0] << endl;
    return 0;
}