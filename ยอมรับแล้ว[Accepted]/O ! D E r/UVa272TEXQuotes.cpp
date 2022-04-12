#include <bits/stdc++.h>

int main() {

    std::string str;
    int flag = 1;
    while (std::getline(std::cin, str)) {
        std::string::iterator it;
        for (it = str.begin(); it < str.end(); it++) {
            if (*it == '"') {
                if (flag) {
                    std::cout << "``";
                    flag = !flag;
                } else { 
                    std::cout << "''";
                    flag = !flag;
                }
            } else std::cout << *it;
        }
        std::cout << '\n';
    }

    return 0;
}