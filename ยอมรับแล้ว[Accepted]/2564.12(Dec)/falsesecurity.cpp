#include <bits/stdc++.h>

using namespace std;

unordered_map<char, string> morse_map{
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {'_', "..--"},
    {'.', "---."},
    {',', ".-.-"},
    {'?', "----"},
};

unordered_map<string, char> letters_map{};

int main() {
    for (const std::pair<char, string>& p:morse_map) {
        letters_map.insert(std::make_pair(p.second, p.first));
    }

    string message{};
    while (getline(cin, message)) {
        string morse{}, encode{};
        int n = message.size();
        int len_info[n]{};
        int k{}, i{};
        for (char const &ch:message) {
            morse += morse_map[ch];
            len_info[k] = morse_map[ch].size();
            k++;
        }
        reverse(len_info, len_info + n);

        for (k = 0, i = 0; k < morse.length(); k += len_info[i], i++) {
            encode += letters_map[morse.substr(k, len_info[i])];
        }
        cout << encode << endl;
    }
 
    return 0;
}