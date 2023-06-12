#include <iostream>
#include <map>
using namespace std;

int main (){
    string student[2] = {
        "Masbro",
        "Led"
    };

    map<string, string> student_map = {
        {"Name", "Mabroo"}
        {"Dorm", "Led"}
    };

    cout << student_map["Name"] << "\n"
         << student_map["Dorm"] << "\n";

    return 0;
}