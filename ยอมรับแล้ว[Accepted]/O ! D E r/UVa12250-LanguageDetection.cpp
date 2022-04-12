#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  while (cin >> s && s[0] != '#') {
    if (s.compare("HELLO") == 0) cout << "ENGLISH" << '\n';
    else if (s.compare("HOLA") == 0) cout << "SPANISH" << '\n';
    else if (s.compare("HALLO") == 0) cout << "GERMAN" << '\n';
    else if (s.compare("BONJOUR") == 0) cout << "FRENCH" << '\n';
    else if (s.compare("CIAO") == 0) cout << "ITALIAN" << '\n';
    else if (s.compare("ZDRAVSTVUJTE") == 0)cout << "RUSSIAN" << '\n';
    else cout << "UNKNOWN" << '\n';
  }

  return 0;
}
