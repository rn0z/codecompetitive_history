#include <bits/stdc++.h>

using namespace std;

unordered_map<char, string> alpha_map{
    {'a', "2"},
    {'b', "22"},
    {'c', "222"},
    {'d', "3"},
    {'e', "33"},
    {'f', "333"},
    {'g', "4"},
    {'h', "44"},
    {'i', "444"},
    {'j', "5"},
    {'k', "55"},
    {'l', "555"},
    {'m', "6"},
    {'n', "66"},
    {'o', "666"},
    {'p', "7"},
    {'q', "77"},
    {'r', "777"},
    {'s', "7777"},
    {'t', "8"},
    {'u', "88"},
    {'v', "888"},
    {'w', "9"},
    {'x', "99"},
    {'y', "999"},
    {'z', "9999"},
    {' ', "0"}
};

int main() {
    int tc{}; cin >> tc;
    cin.ignore();
    for (int i = 1; i <= tc; i++) {
        string txt{};
        getline(cin, txt);
        string keypress{};
        for (char const &ch:txt) {
            string::size_type i = keypress.size();
            if (keypress[i - 1] == alpha_map[ch][0]) {
                keypress.append(" " + alpha_map[ch]);
            } else {
                keypress.append(alpha_map[ch]);
            }
        }
        cout << "Case #" << i << ": ";
        cout << keypress << endl;
    }


        unordered_map<string, int> umap;
 
    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;
 
    // Traversing an unordered map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;
    return 0;
}