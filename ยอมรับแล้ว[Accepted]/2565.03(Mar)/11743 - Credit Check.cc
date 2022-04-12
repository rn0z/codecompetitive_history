#include <bits/stdc++.h>

using namespace std;

int dd(char digit) {
    int rs = (digit - '0') * 2;
    return rs;
}

int addup_digits(int numb) {
    switch (numb) {
    case 18:
        return 9;
    case 16:
        return 7;
    case 14:
        return 5;
    case 12:
        return 3;
    case 10:
        return 1;
    default:
        return numb;
    }
}

void run_case() {
    string numbs, str, raw;

    getline(cin, raw);

    stringstream ss(raw);
    while (ss >> str)
        numbs += str;
    

    int sumdd{};
    int sum{};
    for (int i = 1; i < numbs.size(); i += 2)
        sum += numbs[i] - '0';
    for (int i = 0; i < numbs.size(); i += 2)
        sumdd += addup_digits(dd(numbs[i]));

    if ((sumdd + sum) % 10 == 0) cout << "Valid" << endl;
    else cout << "Invalid" << endl;
}

int main() {
    int tc; cin >> tc;
    cin.ignore();

    while (tc-- > 0)
        run_case();

    return 0;
}