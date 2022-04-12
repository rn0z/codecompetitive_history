#include <bits/stdc++.h>

using namespace std;

auto const ranklst = [](int s) {
    if (s >= 21)
        return 2;
    else if (s >= 16)
        return 3;
    else if (s >= 11)
        return 4
    else if (s >= 1)
        return 5;
}

void run_case() {
    int star{}, streak{}, rank = 25;
    string match;

    cin >> match;

    for (auto const & c:match) {

        bool bonus = streak >= 3;

        if (c == 'W') {
            ++streak;

        } else if (c == 'L') {
            streak = 0;

        }
    }

}

int main() {
    run_case();

    return 0;
}