#include <bits/stdc++.h>
using namespace std;

unordered_map<char, pair<int, int>> val {
    {'A', {11, 11}},
    {'K', {4, 4}},
    {'Q', {3, 3}},
    {'J', {20, 2}},
    {'T', {10, 10}},
    {'9', {14, 0}},
    {'8', {0, 0}},
    {'7', {0, 0}}
};

int main() {
    int n; char trump{};
    scanf ("%d %c", &n, &trump);
    int N = n * 4;
    int sum{};
    for (int i = 0; i < N; ++i) {
        string card; cin >> card;
        char numb = card[0], suit = card[1];
        if (suit == trump)
            sum += val[numb].first;
        else
            sum += val[numb].second;
    }
    cerr << sum << endl;
    printf("%d\n", sum);

}