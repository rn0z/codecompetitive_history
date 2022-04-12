#include <bits/stdc++.h>
using namespace std;


void run_case(int& C, int& n) {
    bool poss = true;
    int pas{};
    for (int i{}; i < n && poss; i++) {
        int left, went_in, stay;
        cin >> left >> went_in >> stay;
        pas -= left;
        if (pas < 0) poss = false;
        pas += went_in;
        if (pas > C) poss = false;

        if (pas < C && pas != C && stay) poss = false;
        if (n - 1 == i)
            if (pas != 0) poss = false;
            else if (stay != 0) poss = false;
    }

    if (poss) cout << "possible" << endl;
    else cout << "impossible" << endl;

}

int main() {
    int C, n; cin >> C >> n;
    run_case(C, n);

    return 0;
}