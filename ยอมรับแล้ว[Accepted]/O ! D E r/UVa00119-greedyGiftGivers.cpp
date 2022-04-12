#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;

  while (cin >> n) {

    string p[n];
    int m[n] = {0};
    int i, l;

    for (i = 0; i < n; i++)
      cin >> p[i];

    string giver;
    for (i = 0; i < n; i++) {

      cin >> giver;
      for (l = 0; l < n; l++)
        if (p[l].compare(giver) == 0) break;

      int money; cin >> money; 
      m[l] -= money;
      int giveN, k, j; 
      string giveP;
      cin >> giveN; 
      if (giveN != 0) {
        m[l] +=  money % giveN; 
        money -= money % giveN;
        for (j = 0; j < giveN; j++) {     
          cin >> giveP; 
          for (k = 0; k < n; k++)
            if (p[k].compare(giveP) == 0)
              m[k] += money / giveN;
        }
      }
    }

    for (int i = 0; i < n; i++)
      cout << p[i] << " " << m[i] << endl; 
    cout << '\n' << '\n';
  }

  return 0;
}
