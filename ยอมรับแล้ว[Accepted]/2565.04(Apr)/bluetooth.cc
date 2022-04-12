#include <bits/stdc++.h>

using namespace std;

unordered_map<string, char> R {
    {"8+", '0'},
    {"8-", '0'},
    {"7+", '0'},
    {"7-", '0'},
    {"6+", '0'},
    {"6-", '0'},
    {"5+", '0'},
    {"5-", '0'},
    {"4+", '0'},
    {"4-", '0'},
    {"3+", '0'},
    {"3-", '0'},
    {"2+", '0'},
    {"2-", '0'},
    {"1+", '0'},
    {"1-", '0'}
};

unordered_map<string, char> L {
    {"+8", '0'},
    {"-8", '0'},
    {"+7", '0'},
    {"-7", '0'},
    {"+6", '0'},
    {"-6", '0'},
    {"+5", '0'},
    {"-5", '0'},
    {"+4", '0'},
    {"-4", '0'},
    {"+3", '0'},
    {"-3", '0'},
    {"+2", '0'},
    {"-2", '0'},
    {"+1", '0'},
    {"-1", '0'}
};

int main() {

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        char cond;
        cin >> str >> cond;
        if (str[0] == '-' || str[0] == '+')
            L[str] = cond;
        if (str[1] == '-' || str[1] == '+')
            R[str] = cond;
    }
    
    bool chewL{};
    bool chewR{};

    for (int i = 1; i <= 8 && !chewL; ++i)
        if (L["-" + to_string(i)] == '0' && L["+" + to_string(i)] == '0')
            chewL = true;

    for (int i = 1; i <= 8 && !chewL; ++i)
        for (int k = 1; k <= 8; ++k)
            if (L["-" + to_string(i)] == '0')
                if (L["+" + to_string(k)] == '0')
                    chewL = true;

    for (int i = 1; i <= 8 && !chewR; ++i)
        for (int k = 1; k <= 8; ++k)
            if (R[to_string(i) + "-"] == '0')
                if (R[to_string(k) + "+"] == '0')
                    chewR = true;

    cerr << chewL << endl;
    cerr << chewR << endl;


    for (auto teeth:L)
        if (teeth.second == 'b') chewL = false;

    for (auto teeth:R)
        if (teeth.second == 'b') chewR = false;

    if (!chewL && !chewR)
        cout << 2;
    else if (chewL && !chewR)
        cout << 0;
    else if (chewR && !chewL)
        cout << 1;

    cout << endl;


    return 0;
}
