#include <iostream>

#define max(a, b) (a > b)? a:b
#define min(a, b) (a < b)? a:b 

int main() {
  int N, B, H, W, ans, cap;
  while (std::cin >> N >> B >> H >> W) {
    int i, l, p;
    cap = 0, ans = B;
    for (i = 0; i < H; i++) {
      std::cin >> p;
      for (l = 0; l < W; l++) {
        int b; std::cin >> b;
        cap = max(cap, b);
      }
      if (cap >= N) ans = min(ans, N * p);
    }
    if (ans <= B) std::cout << ans << '\n';
    else std::cout << "stay home" << '\n';
  } 

  return 0;
}
