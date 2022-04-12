#include <iostream>

int main() {
    std::string s{}; std::getline(std::cin, s);
    printf("Thank you, %s, and farewell!\n", s.c_str());

    return 0;
}