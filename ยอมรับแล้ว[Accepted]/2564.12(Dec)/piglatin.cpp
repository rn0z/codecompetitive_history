#include <bits/stdc++.h>

using namespace std;

int main() {
    string input{};
    while (std::getline(std::cin, input)) {
        stringstream words(input);
        std::string word{};
        std::string vowel = {'a', 'e', 'i', 'o', 'u', 'y'};
        while (words >> word) {
            bool isVowelfirst{};
            for (char const & v:vowel) {
                if (word[0] == v) {
                    std::cout << word << "yay" << ' ';
                    isVowelfirst = true;
                    break;
                }
            }
            if (!isVowelfirst) {
                std::string afterVowel{};
                std::string beforeVowel{};
                bool isFound{};
                for (std::string::size_type i = 0; i < word.size(); i++) {
                    for (char const &c :vowel) {
                        if (word[i] == c) {
                            beforeVowel = word.substr(0, i);
                            afterVowel = word.substr(i, word.size() - i);
                            isFound = true;
                        }
                    }
                    if (isFound) break;
                }
                cout << afterVowel;
                cout << beforeVowel << "ay ";
            }
        }
            cout << endl;
    }

    return 0;
}