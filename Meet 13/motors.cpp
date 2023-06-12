#include <iostream>
#include <vector>
using namespace std;

int main (){

     vector<string> motors;
    motors.push_back("Honda");
    motors.push_back("Scoopy");
    motors.push_back("Vespa");
    motors.push_back("Mio");
    motors.push_back("Beat");
  
motors.erase(motors.begin()+2); 
  for (int i = 0; i < motors.size(); i++){
        cout << motors[i] << " ";
    }
    cout << endl;

motors.insert(motors.begin()+4, "Legenda");
for(int i = 0; i < motors.size(); i++){
    cout << motors[i] << " ";
}
cout << endl;

motors.insert(motors.begin()+2, "Vespa");
    for(int i = 0; i < motors.size(); i++){
        cout << motors[i] << " ";
}
cout << endl;
return 0;
}