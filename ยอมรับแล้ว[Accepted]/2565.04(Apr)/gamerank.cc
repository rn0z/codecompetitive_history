#include <bits/stdc++.h>

using namespace std;

auto const ranklst = [](int s) -> int {
    if (s >= 21)
        return 2;
    else if (s >= 16)
        return 3;
    else if (s >= 11)
        return 4;
    else if (s >= 1)
        return 5;

    return 0;
};

void run_case() {
    int star{}, streak{}, rank = 25;
    string match;

    cin >> match;

    for (auto const & c:match) {
        cerr << star << " : " <<  streak << " : " << rank << "=" << c <<endl;

        if (rank == 0) continue;

        if (c == 'W') {
            ++streak;
            star += streak >= 3 && (rank >= 6 && rank <= 25)? 2:1;

            if (star > ranklst(rank)) {
                star -= ranklst(rank);
                --rank;
            }
        } else if (c == 'L') {
            streak = 0;
            if (rank >= 1 && rank <= 20)
                if (rank == 20 && star > 0)
                    --star;
                else if (rank != 20 && rank < 20)
                    --star;
            if (star < 0 && rank != 20) {
                star = ranklst(rank + 1) - 1;
                ++rank;
            }
        }
        cerr << star << " : " <<  streak << " : " << rank << "=" << c <<endl;
        cerr << "---------" << endl;
    }

    cerr << "END" << endl;
    cerr << star << " : " <<  streak << " : " << rank <<endl;
    cerr << "---------" << endl;

    if (rank == 0) cout << "Legend";
    else cout << rank;
    cout << endl;

}

int main() {
    run_case();

    return 0;
}