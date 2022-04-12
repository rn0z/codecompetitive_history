#include <bits/stdc++.h>
using namespace std;

vector<int> forecast{};
pair<int, int> t{};
int d = 1;

void run_case(int n) {
    for (int i = 0, t = 0; i < n && cin >> t; i++) forecast.push_back(t);
    t = make_pair(forecast[0], forecast[2]);

    for (int i = 2; i < n - 1; i++) {
        if (forecast[i - 1] <= forecast[i] || forecast[i + 1] <= forecast[i]) {
            if (max(forecast[i-1], forecast[i+1]) < max(t.first, t.second)) {
                t = make_pair(forecast[i -1], forecast[i + 1]);
                d = i;
                cerr << forecast[i - 1] << ' ' << forecast[i+1] << ' ' << i << endl;
                cerr << max(forecast[i-1], forecast[i+1]) << endl;
            }
        }
    }

    cout << d << ' ' << max(t.first, t.second) << endl;
}

int main() {
    int n; cin >> n;
    run_case(n);



    return 0;
}