#include <cstdio>

int main(int argc, char *argv[]) {

  char s[1000000] = {'\0'};
  int n, t = 0;
  while (scanf("%s %d", s, &n)) {
    printf("Case %d:\n", ++t);
    while (n--) { 
      int i, j;
      scanf("%d %d", &i, &j);
      if (i > j) {
        int temp = j; 
        j = i, i = temp;
      }

      bool isMin = true;
      for (int k = i; k < j; k++) {
        if (s[k] != s[k + 1]) {
          isMin = false;
        }
      }

      if (isMin) { printf("yes\n"); }
      else { printf("no\n"); }
    }
  }

   return 0;
}


