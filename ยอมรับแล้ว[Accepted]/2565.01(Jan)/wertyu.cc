#include <bits/stdc++.h>
using namespace std;

unordered_map<char, char> mapper{
    {'/', '.'},
    {'.', ','},
    {',', 'M'},
    {'M', 'N'},
    {'N', 'B'},
    {'B', 'V'},
    {'V', 'C'},
    {'C', 'X'},
    {'X', 'Z'},

    {'\'', ';'},
    {';', 'L'},
    {'L', 'K'},
    {'K', 'J'},
    {'J', 'H'},
    {'H', 'G'},
    {'G', 'F'},
    {'F', 'D'},
    {'D', 'S'},
    {'S', 'A'},

    {'\\', ']'},
    {']', '['},
    {'[', 'P'},
    {'P', 'O'},
    {'O', 'I'},
    {'I', 'U'},
    {'U', 'Y'},
    {'Y', 'T'},
    {'T', 'R'},
    {'R', 'E'},
    {'E', 'W'},
    {'W', 'Q'},

    {'=', '-'},
    {'-', '0'},
    {'0', '9'},
    {'9', '8'},
    {'8', '7'},
    {'7', '6'},
    {'6', '5'},
    {'5', '4'},
    {'4', '3'},
    {'3', '2'},
    {'2', '1'},
    {'1', '`'},
};

int main() {
    string code{};
    while (std::getline(std::cin, code)) {
        for (auto const& c:code) {
            if (mapper.count(c) != 0) {
                cout << mapper[c];
            } else {
                cout << c;
            }
        }
        cout << endl;
    }


    return 0;
}