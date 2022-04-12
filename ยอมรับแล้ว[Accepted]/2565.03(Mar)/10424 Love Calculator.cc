#include <bits/stdc++.h>

using namespace std;


unordered_map<char, int> lower{

};

unordered_map<char, int> upper{

};

int sum_digit(int a, int n) {
    if (n == 1) return a;
    else {
        string str = to_string(a);
        int rs{};
        for (auto const& ch:str) {
            rs += ch - '0';
        }
        
        return sum_digit(rs, to_string(rs).length());
    }
}

int main() {
    string a, b;

    for (int i = 0; i < 26; ++i) {
        lower.insert({(char)('a' + i), i + 1});
        upper.insert({(char)('A' + i), i + 1});
    }

    while (getline(cin, a) && getline(cin, b)) {
        int value_a{}, value_b{};
        for (auto const& ch:a)
            if (lower[ch])
                value_a += lower[ch];
            else if (upper[ch]) 
                value_a += upper[ch];

        for (auto const& ch:b)
            if (lower[ch])
                value_b += lower[ch];
            else if (upper[ch]) 
                value_b += upper[ch];
            
        value_a = sum_digit(value_a, to_string(value_a).length());
        value_b = sum_digit(value_b, to_string(value_b).length());

        cout << fixed;
        cout << setprecision(2);

        if (value_a > value_b)
            cout << ((float)value_b / value_a) * 100 << " %" << endl;
        else if (value_a < value_b)
            cout << ((float)value_a / value_b) * 100 << " %" << endl;
        else 
            cout << 100.00 << " %" << endl;
    }

    return 0;
}