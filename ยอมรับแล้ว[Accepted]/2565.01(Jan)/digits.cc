#include <bits/stdc++.h>

using namespace std;

int recur(int i,  string number) {
    int nDigits = number.size();
    
    ostringstream ss;
    ss << nDigits;
    cerr << number << endl;
    cerr << i << ' ' << ss.str() << '\n' << '\n';

    if (number == ss.str()) return i;

    return recur(i + 1, ss.str());
}

int main() {
    
    string d{};
    while (cin >> d && d.compare("END"))
        cout << recur(1, d) << endl;

    return 0;
}