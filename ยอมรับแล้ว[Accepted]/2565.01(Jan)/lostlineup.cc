#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> line(n);
    line[0] = 1;
    for (int i = 2; i <= n; i++) {
        int t; cin >> t;
        line[t + 1] = i;
    }

    for (auto eachperson: line) {
        cout << eachperson << ' ';
    }
    cout << endl;

    return 0;
}