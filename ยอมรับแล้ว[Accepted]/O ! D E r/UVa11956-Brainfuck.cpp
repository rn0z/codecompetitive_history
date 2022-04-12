#include <cstdio>

int main() {
  int tc; scanf("%d", &tc);
  for (int ec = 1; ec <= tc; ec++) {
    int mem[100] = {0};
    char input[100000] = {'\0'}; 
    int i, p = 0;

    scanf("%s", &input);
    for (i = 0; input[i]; i++) {
      switch(input[i]) {
        case '>':
          ++p;
          if (p == 100)
            p = 0;
          break;
        case '<':
          --p;
          if (p == -1)
            p = 99;
          break;
        case '+':
          ++mem[p]; 
          if (mem[p] == 256) 
            mem[p] = 0;
          break;
        case '-':
          --mem[p];
          if (mem[p] == -1)
            mem[p] = 255;
          break;
      }
    }

    printf("Case %d:", ec);
    for (i = 0;i < 100; i++)
      printf(" %02x", mem[i]); 
    printf("\n");
  } 


  return 0;
}
