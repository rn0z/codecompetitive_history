#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int n; cin >> n;
    bool isMakeSense = true;
    for (int i=1; i <= n; i++) {
        string str{};
        cin >> str;
        if (str.length() > 5) continue;

        stringstream stream(str);
        int count{}; stream >> count;

        if (count != i) isMakeSense = false;
    }

    cout << (isMakeSense? "makes sense":"something is fishy") << '\n';

    return 0;
}