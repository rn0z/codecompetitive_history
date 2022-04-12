#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> p1; cin >> p1.first >> p1.second;
    pair<int, int> p2; cin >> p2.first >> p2.second;
    pair<int, int> p3; cin >> p3.first >> p3.second;
    
    if (p1.first == p2.first)
        cout << p3.first << ' ';
    else if (p1.first == p3.first)
        cout << p2.first << ' ';
    else if (p2.first == p3.first)
        cout << p1.first << ' ';

    if (p1.second == p2.second)
        cout << p3.second << endl;
    else if (p1.second == p3.second)
        cout << p2.second << endl;
    else if (p2.second == p3.second)
        cout << p1.second << endl;


    return 0;
}