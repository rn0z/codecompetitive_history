#include <iostream>
#include <string>

int main() {
  int tc; std::cin >> tc;
  while (tc--) {
    std::string S; std::cin >> S;
    int len = S.length();
    if (S.compare("1") == 0 ||
        S.compare("4") == 0 || 
        S.compare("78") == 0)
      std::cout << "+" << '\n';
    else if (S[len - 2] == '3' ||
             S[len - 1] == '5')
      std::cout << "-" << '\n';
    else if (S[0] == '9' && S[len - 1] == '4') 
      std::cout << "*" << '\n';
    else if (S[0] == '1' && S[1] == '9' && S[2] == '0')
      std::cout << "?" << '\n'; 
  }

  return 0;
}
