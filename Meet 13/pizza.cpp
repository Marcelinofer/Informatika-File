#include <iostream>
#include <vector>
using namespace std;

int main(){
    string customer;
    cout << "Hi.. Who is this...?"; getline(cin, customer);

    cout << "Hello " << customer << " Please request your toppings request here...\nPress q to quit program.\n";

    string topping("");
    vector<string> toppings;
    while(true){
        getline(cin, topping);
        if (topping == "q")
        break;
        toppings.push_back(topping);
    }
    cout << "Your pizzas toppings are ";
    for(int i = 0; i< toppings.size();i++){
        cout << toppings[i] << " ";
    }
    cout << endl;
    cout << "Thank you.";

    return 0;
}