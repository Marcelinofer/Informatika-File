#include <iostream>
using namespace std;

int main() {
      int x = 10, y = 22;
      x += y;
      y = x - y;
      x -= y;
      cout << x << " " << y << endl;
      return 0;
}
