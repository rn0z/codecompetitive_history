#include <iostream>
using namespace std;

int main() {
  int n, c = 0;
  while (cin >> n && n != 0) { 
    int x, y = 0;
    c++;
    while (n-- && cin >> x)
      (x > 0)? y++ : y--; 

    cout << "Case " << c
       << ": " << y << '\n';
  }

  return 0;
}
