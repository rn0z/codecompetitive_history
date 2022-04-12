#include <iostream> int main() {
  bool both = false;
  int mile, juice, i, dur;
  int c = 1;
  int tc, subtc; std::cin >> tc;
  while (tc--) {
    mile = 0, juice = 0;
    std::cin >> subtc; 
    while (subtc--) {
      std::cin >> dur;
      mile += (dur / 30) * 10 + 10;
      juice += (dur / 60) * 15 + 15; 
    }
      std::cout << "Case " << c++ << ": ";
      if (mile < juice) std::cout << "Mile " << mile << '\n';   
      else if (mile == juice) std::cout << "Mile ";          
      if (juice <= mile) std::cout << "Juice " << juice << '\n';
  } 

  return 0;
}
