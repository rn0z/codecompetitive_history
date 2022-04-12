#include <bits/stdc++.h>

int main() {
    using namespace std;
    string text;
    while (getline(cin, text)) {
        for (string::size_type i = 0; i < text.size(); i++) {
            string::size_type begin = i;
            string::size_type end = i;
            while (text[end] != ' ' && end <= text.size()) {
                end++;
            }
            string sub_txt = text.substr(begin, end - begin);
            if (begin != end) {
                for (string::reverse_iterator rit = sub_txt.rbegin(); rit != sub_txt.rend(); rit++) {
                    cout << *rit;
                }
            } else {
                cout << text[i];
            }
            if (end - begin > 0) --end;
            i += (end) - (begin);
        }
        
        std::cout << '\n';
    }

    return 0;
}