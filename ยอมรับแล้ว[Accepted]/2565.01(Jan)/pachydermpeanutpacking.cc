#include <bits/stdc++.h>
using namespace std;

typedef pair<double, double> box;

void run_cases(int n) {
    int m{};
    box st_pos{};
    box nd_pos{};
    string size{};
    vector<pair<box, box>> boxs{};
    vector<string> sizes{};
    for (int i = 0; i < n; i++) {
        double x1, x2, y1, y2;
        string size{};
        cin >> x1 >> y1 >> x2 >> y2 >> size;
        boxs.push_back({{x1, y1}, {x2, y2}});
        sizes.push_back(size);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        double x, y;
        string size{};
        cin >> x >> y >> size;
        bool isFloor = true;
        for (int k = 0; k < boxs.size(); k++) {
            pair<double, double> p1, p2;
            p1 = boxs[k].first;
            p2 = boxs[k].second;
            if ((x >= p1.first && y >= p1.second) && (x <= p2.first && y <= p2.second)) {
                cout << size << ' ';
                if (size == sizes[k]) cout << "correct" << endl;
                else cout << sizes[k] << endl;
                isFloor = !isFloor;
            }
        }
        if (isFloor)
            cout << size << ' ' << "floor" << endl;
    }

    cout << endl;
}

int main() {
    int n;
    while (cin >> n && n > 0)
        run_cases(n);

    return 0;
}