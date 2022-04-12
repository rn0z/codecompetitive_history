#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

  bool courses[10000] = {false};
  int k, m, i;
  while (cin >> k && k > 0) {
    cin >> m;
    bool yes = true;
    for (i = 0; i < k; i++) {
      int course; cin >> course;
      courses[course] = true;
    } 
    int c, r, chosen; 
    for (i = 0; i < m; i++) {
      cin >> c >> r;
      while (c--) {
        cin >> chosen;
        if (courses[chosen])
          r--;
      }
      if (r > 0) yes = false; 
    } 
    if (yes) cout << "yes" << endl;
    else cout << "no" << endl;
  } 

  return 0;
}

