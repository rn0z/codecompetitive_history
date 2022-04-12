#include <iostream>
using namespace std;

int main() {
  string song[] = {
    "Happy", "birthday", "to", "you", 
    "Happy", "birthday", "to", "you", 
    "Happy", "birthday", "to", "Rujia", 
    "Happy", "birthday", "to", "you" 
  };
  int s = 0, p = 0;
  bool isE = false;
  int n; cin >> n;
  string person[n];
  for (int i = 0; i < n; i++) cin >> person[i];
  while (true) {
    if (p == n - 1) isE = true;
    cout << person[p] << ": " << song[s] << '\n';;
    if (s >= 15 && isE) break; 
    s++; p++;
    if (s == 16) s = 0;
    if (p == n) p = 0;
  }

  return 0;
}
