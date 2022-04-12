#include <cstdio>
using namespace std;

int main() {
  char s[20] = {'\0'};
  int c = 1; 
  while (scanf("%s", s) && s[0] != '*') {
    if (s[0] == 'H') printf("Case %d: Hajj-e-Akbar\n", c);
    else if (s[0] == 'U') printf("Case %d: Hajj-e-Asghar\n", c);  
    c++;
  }
}
