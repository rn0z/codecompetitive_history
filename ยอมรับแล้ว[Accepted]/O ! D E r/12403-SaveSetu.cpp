#include <cstdio>
using namespace std;

int main() {

  int t, total = 0;
  char mess[6] = {'\0'};
  scanf("%d", &t);
  while (t--) {
    scanf("%s", mess);
    if (mess[0] == 'd') {
      int d = 0; scanf("%d", &d);
      total += d;
    } else {
      printf("%d\n", total);
    }
  }

  return 0;
}
