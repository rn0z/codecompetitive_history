#include <bits/stdc++.h>

using namespace std;

int main() {
    string code{}; 
    while (cin >> code) {
        int size = code.size();
        int n = ceil(sqrt(size));
        int r{};
        int c{};

        for (int i = n; i > 0; i--) {
            if (size % i == 0) {
                r = i;
                c = size / i;
                break;
            }
        }
        if (r < c) swap(c, r);
        string grid[r]{};
        for (int i = 0; i < r; i++) {
             grid[i] = code.substr(i*(c), c);
            //  cout << grid[i] << endl;
        }
            

        if (r == c) {
            for (int i = 0; i < r; i++) {
                for (int k = 0; k < c; k++) {
                    cout << grid[k][i];
                }
            }

        }
        if (r > c) {
            for (int k = 0; k < c; k++) {
                for (int i = 0; i < r; i++) {
                    cout << grid[i][k];
                }
            }

        }


        cout << endl;
        
    }

    return 0;
}