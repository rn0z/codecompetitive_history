#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i=1; i <= n; i++) {
        string str{};
        cin >> str;

        stringstream stream(str);
        int count{}; stream >> count;

        count = std::stoi(str);
    }

    return 0;
}