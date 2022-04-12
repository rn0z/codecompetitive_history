#include <bits/stdc++.h>

using namespace std;

int main() {
    string hexagon{}; cin >> hexagon;
    int n; cin >> n;
    while (n--) {
        string l{}; cin >> l;
        if (l.find(hexagon[0]) == std::string::npos) continue;

        bool isMatch = true;
        for (string::size_type i = 0; i < l.size(); i++)
            if (hexagon.find(l[i]) == std::string::npos)
                isMatch = false;
        
        if (isMatch && l.size() >= 4) cout << l << endl;
    }

    return 0;
}