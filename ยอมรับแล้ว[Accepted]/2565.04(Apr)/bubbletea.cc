#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<pair<int, vector<int>>> viv;

void run_case() {
    int N, M;
    vi pM{};
    viv pN{};

    cin >> N;
    for (int i = 0, p; i < N && cin >> p; ++i)
        pN.push_back({p, {}});

    cin >> M;
    for (int i = 0, p; i < M && cin >> p; ++i)
        pM.push_back(p);
    
    for (int i = 0, k{}; i < N && cin >> k; ++i)
        for (int m; k > 0 && cin >> m; --k)
            pN[i].second.push_back(m);

    int money{};
    cin >> money;

    vi costs{};

    for (auto & e:pN)
        for (auto & t:e.second)
            costs.push_back(e.first + pM[t - 1]);
    
    sort(costs.begin(), costs.end());
    
    int cost;
    if (costs.size() == 0) {
        sort(pN.begin(), pN.end(), [](auto left, auto right) {
            return left.first < right.first;
        });
        cost = pN[0].first;
    } else cost = costs[0];

    
    int rs =  (money / cost) - 1;

    if (rs < 1) cout << 0 << endl;
    else cout << rs << endl;

}

int main() {
    run_case();
    return 0;
}