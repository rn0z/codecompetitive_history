#include <cstdio>
using namespace std;

int main() {
  int T, c, rs = 0;
  int s[100] = {0}; char LR[100];
  scanf("%d", &T);
  while (T--) {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%s", LR);
      if (LR[0] == 'L') {
        rs += s[i] = -1;
      } else if (LR[0] == 'R') {
        rs += s[i] = 1;
      } else {
        scanf("%*s %d", &c);
        rs += s[i] = s[c - 1];
      }
    } 
      printf("%d\n", rs);
  }

  return 0;
}
