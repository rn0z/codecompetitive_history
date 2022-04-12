#include <bits/stdc++.h>

using namespace std;

int main() {
    string text{};
    while (getline(cin, text)) {
        string vowel = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
        string rs{};
        for (string::size_type i = 0; i < text.size(); i++) {
            if (!isalpha(text[i])) {
                rs += text[i];
            } else {
                string::size_type begin = i;
                string::size_type end = i;
                while (isalpha(text[end])) {
                    // cout << text[i];
                    ++end;
                }
                
                string word = text.substr(begin, end - begin);
                bool isVowel{};
                for (char const &w:vowel) {
                    if (w == word[0]) {
                        isVowel = true;
                        break;
                    }
                }

                if (isVowel) {
                    word += "ay";
                } else {
                    word = word.substr(1, word.size()) + word[0] +"ay";
                }
                rs+= word;
                i += (end - 1) - begin; // offset i to next.
            }

            
        }
        cout << rs;
        cout << endl;
    }

    return 0;
}