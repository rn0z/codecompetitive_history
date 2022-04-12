#include <iostream>

int main() {
    std::string str{};
    while(getline(std::cin, str)) {
        printf("%s\n", str.c_str());

    }

    return 0;
}