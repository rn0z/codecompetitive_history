#include <iostream>
using namespace std;

int main() {
  int a, b; 
  while (cin >> a >> b && (a != -1 || b != -1)) {
    if (a < b)
      if ((b - a) <= 50) cout << b - a << '\n';
      else cout << 100 - (b - a) << '\n';
    else
      if ((a - b) <= 50) cout << b - a << '\n';
      else cout << 100 - (a - b) << '\n';
  }


  return 0;
}
