#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentences;
    while (getline(cin, sentences)) {
        if (!sentences.compare("DONE")) break;
        int i, j, len;
        bool flag = true;
        len = sentences.length();
        for (i = 0, j = len - 1; i < j; ++i, --j) {
            while (i < len && isalpha(sentences[i]) == 0) ++i;
            while (j >= 0 && isalpha(sentences[j]) == 0) --j; 
            if (sentences[i] >= 'a') sentences[i] += - 'a' + 'A';
            if (sentences[j] >= 'a') sentences[j] += - 'a' + 'A';
            if (i < j && sentences[i] != sentences[j]) {
                flag = false;
                break;
            }
        } 
        if (flag) cout << "You won't be eaten!" << '\n';
        else cout << "Uh.. oh" << '\n';
    }

    return 0;
}
