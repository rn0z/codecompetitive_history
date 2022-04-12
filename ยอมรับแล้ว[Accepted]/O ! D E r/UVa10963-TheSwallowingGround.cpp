#include <cstdio>

int main() {
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    int w, d, i;
    int north, south;
    bool yes = true;
    scanf("%d", &w);
    scanf("%d %d", &north, &south);
    d = north - south;
    for (i = 0; i < w - 1; i++) {
      scanf("%d %d", &north, &south);
      if (d != north - south)
        yes = false;
    } 
    if (yes) printf("yes\n");
    else printf("no\n");

    printf("\n");
  }

  return 0;
}
