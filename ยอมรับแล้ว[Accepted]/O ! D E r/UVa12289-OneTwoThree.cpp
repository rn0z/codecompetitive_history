#include <iostream>
using std::cout;
using std::cin;

int main() {
  int tc; cin >> tc;
  while (tc--) {
    std::string num; cin >> num;
    if (num.length() == 5) { 
      cout << "3" << '\n';
    } else {
      if (num[0] == 'o') {
        if (num[1] == 'n' || num[2] == 'e')
          cout << "1" << '\n';
      } else if (num[1] == 'n') {
        if (num[0] == 'o' || num[2] == 'e') 
          cout << "1" << '\n';
      } else if (num[2] == 'e') {
        if (num[0] == 'o' || num[1] == 'n')
          cout << "1" << '\n';
      } else {
        cout << "2" << '\n';
      }
    }
  }

  return 0;
}
