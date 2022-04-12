#include <bits/stdc++.h>

std::vector<std::string> team{};

int main() {
    int n{}; scanf("%d", &n);
    while (n--) {
        std::string str;
        std::cin >> str;
        team.push_back(str);
    }
    
    bool isDecreasing = true;
    auto st = team.begin();
    for (auto it = team.begin() + 1; it < team.end(); it++, st++) {
        if (st[0] < it[0]) isDecreasing = false;
    }


    if (isDecreasing) {
        std::cout << "DECREASING" << '\n';
    } else {
        bool isIncreasing = true;
        auto st = team.begin();
        for (auto it = team.begin() + 1; it < team.end(); it++, st++) {
            if (st[0] > it[0]) isIncreasing = false;
        }

        if (isIncreasing) std::cout << "INCREASING" << '\n';
        else std::cout << "NEITHER" << '\n';

    }



    return 0;
}