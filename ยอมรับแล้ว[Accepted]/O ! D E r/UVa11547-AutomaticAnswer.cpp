#include <iostream>
using namespace std;

int main() {
  int tc; cin >> tc;
  while (tc--) {
    int n; 
    cin >> n;
    int x = (((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10) % 10;
    if (x > 0) cout << x << endl;
    else cout << x*(-1) << endl; 
  }
   
  return 0;
}
