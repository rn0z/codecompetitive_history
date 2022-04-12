#include <iostream>

int main() {
  int c = 1;
  int tc; std::cin >> tc;
  while (tc--) {
    bool topV[10] = { false }; 
    int rele[10] = { 0 }, i;
    std::string web[10] = {""};

    for (i = 0; i < 10; i++)
      std::cin >> web[i] >> rele[i];

    int m = 1;
    for (i = 0; i < 10; i++) 
      if (rele[i] > m) m = rele[i];

    std::cout << "Case #" << c++ << ":" << '\n';
    for (i = 0; i < 10; i++)
      if (rele[i] == m) std::cout << web[i] << '\n';
  }

  return 0;
}


