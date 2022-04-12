#include <iostream>
using namespace std;

int main() {
  int tc; cin >> tc;
  int a, b, c, x = 1;
  while (tc--) {
    cin >> a >> b >> c;
    if (a > 20 || b > 20 || c > 20) printf("Case %d: bad\n", x++); 
    else printf("Case %d: good\n", x++);
  }

  return 0;
}
