#include <bits/stdc++.h>

using namespace std;

unordered_map<int, string> num_map{
    {1, ".,?\""},
    {2, "abc"},
    {3, "def"},
    {4, "ghi"},
    {5, "jkl"},
    {6, "mno"},
    {7, "pqrs"},
    {8, "tuv"},
    {9, "wxyz"},
    {0, " "},
};

int main() {
    int tc{}; cin >> tc;
    while (tc--) {
        int press{}; cin >> press;
        int N[press]{};
        int P[press]{};
        for (int i = 0; i < press; i++) cin >> N[i];
        for (int i = 0; i < press; i++) cin >> P[i];

        for (int i = 0; i < press; i++) {
            string key = num_map[N[i]];
            cout << key[P[i] - 1];
        }
        cout << endl;
    }

    return 0;
}