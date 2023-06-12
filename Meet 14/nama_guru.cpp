#include <iostream>
#include <map>
using namespace std;

int main (){
    string teacher[2] = {
        "Sir Anas",
        "Informatika"
    };

    map<string, string> teacher_map = {
        {"Name", "Sir Anas"},
        {"Subject", "Informatika"}
    };
    cout << teacher_map["Name"] << " : ";
    cout << teacher_map["Subject"] << endl;

    return 0;
} //marcelino