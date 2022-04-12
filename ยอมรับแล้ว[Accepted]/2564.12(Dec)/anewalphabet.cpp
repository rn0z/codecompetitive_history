#include <bits/stdc++.h>

int main() {
    std::string text{}; getline(std::cin, text);
    for (char const &ch:text) {
        if (ch == 'a' || ch == 'A'){
            std::cout << "@";
        } else if (ch == 'b' || ch == 'B') {
            std::cout << "8";
        } else if (ch == 'c' || ch == 'C') {
            std::cout << "(";
        } else if (ch == 'd' || ch == 'D') {
            std::cout << "|)";
        } else if (ch == 'e' || ch == 'E') {
            std::cout << "3";
        } else if (ch == 'f' || ch == 'F') {
            std::cout << "#";
        } else if (ch == 'g' || ch == 'G') {
            std::cout << "6";
        } else if (ch == 'h' || ch == 'H') {
            std::cout << "[-]";
        } else if (ch == 'i' || ch == 'I') {
            std::cout << "|";
        } else if (ch == 'j' || ch == 'J') {
            std::cout << "_|";
        } else if (ch == 'k' || ch == 'K') {
            std::cout << "|<";
        } else if (ch == 'l' || ch == 'L') {
            std::cout << "1";
        } else if (ch == 'm' || ch == 'M') {
            std::cout << "[]\\/[]";
        } else if (ch == 'n' || ch == 'N') {
            std::cout << "[]\\[]";
        } else if (ch == 'o' || ch == 'O') {
            std::cout << "0";
        } else if (ch == 'p' || ch == 'P') {
            std::cout << "|D";
        } else if (ch == 'q' || ch == 'Q') {
            std::cout << "(,)";
        } else if (ch == 'r' || ch == 'R') {
            std::cout << "|Z";
        } else if (ch == 's' || ch == 'S') {
            std::cout << "$";
        } else if (ch == 't' || ch == 'T') {
            std::cout << "']['";
        } else if (ch == 'u' || ch == 'U') {
            std::cout << "|_|";
        } else if (ch == 'v' || ch == 'V') {
            std::cout << "\\/";
        } else if (ch == 'w' || ch == 'W') {
            std::cout << "\\/\\/";
        } else if (ch == 'x' || ch == 'X') {
            std::cout << "}{";
        } else if (ch == 'y' || ch == 'Y') {
            std::cout << "`/";
        } else if (ch == 'z' || ch == 'Z') {
            std::cout << "2";
        } else {
            std::cout << ch;
        }
    }
    std::cout << '\n';
    return 0;
}