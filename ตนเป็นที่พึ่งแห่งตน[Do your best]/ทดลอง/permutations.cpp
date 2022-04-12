#include <bits/stdc++.h>

int main() {
    std::string P{"RATE"};

    do {
        std::cout << P << std::endl;
    } while (std::next_permutation(P.begin(), P.end()));
    
    return 0;
}