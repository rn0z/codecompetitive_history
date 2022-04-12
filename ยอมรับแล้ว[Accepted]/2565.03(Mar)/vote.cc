#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n; cin >> n;
    int max = -1;
    int i_max{};
    int sum{}; //sum without max;
    vector<int> lst{};
    bool nowin{};
    for (int k = 0; k < n; ++k) {
        int vote; cin >> vote;
        if (max < vote) {
            max = vote;
            i_max = k;
        }
        lst.push_back(vote);
    }

    int temp = lst[0];
    for (int i = 1; i < lst.size(); ++i)  {
        if (i == i_max) continue;
        if (lst[i] == max) nowin = true;
    }

    for (int const& e:lst)
        if (e != max) sum += e;

    if (nowin) cout << "no winner";
    else if (max > sum) {
        cout << "majority winner " << i_max + 1;
    } else {
        cout << "minority winner " << i_max + 1;
    }
    cout << endl;
}

int main(){
    int tc; cin >> tc;
    while (tc-- > 0)
        run_case();

    return 0;
}