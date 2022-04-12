#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[3]{};
    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(begin(a), end(a));
    int rs{};

    if (a[1] - a[0] == a[2] - a[1])
        rs = a[2] + (a[1] - a[0]);
    else if (a[1] - a[0] < a[2] - a[1])
        rs = a[1] + (a[1] - a[0]);
    else if (a[1] - a[0] > a[2] - a[1])
        rs = a[0] + (a[2] - a[1]);
    
    cout << rs << endl;
}