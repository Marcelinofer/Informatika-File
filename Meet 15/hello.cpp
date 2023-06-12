#include <bits/stdc++.h>
using namespace std;

void say_hello(string to){// var to disebut sbgai parameter
     cout << "Hello, " << to << "!\n"
        << "Nice to Meet you!\n";
}
void say_goodbye(string name = "Jannnnn"){
    cout << "Bye " << name << "\n";
}
int main (){
   say_hello("BB");//nilai aa dan bb disebut sebaagai argumen
   say_hello("AA");
   say_goodbye("CC");
   say_goodbye();
    return 0;
}