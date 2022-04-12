#include <cstdio>
using namespace std;

int main() {
  int tc, check, result;
  char s[100];
  int poss[100] = {0};

  scanf("%d", &tc);
  while (tc--) {
    int n;
    result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%s", s);
      if (s[0] == 'L') {
        result += poss[i] = -1;
      } else if (s[0] == 'R') {
        result += poss[i] = 1;
      } else {
        scanf("%*s %d", &check);
        result += poss[i] = poss[check - 1];
      }

    }
    printf("%d\n", result);
  }
}
