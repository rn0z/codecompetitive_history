#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, m; cin >> n >> m;

    if (n > m) printf("Dr. Chaz needs %d more piece%c of chicken!\n", n - m, (n - m == 1)? '\0':'s');
    else if (n < m) printf("Dr. Chaz will have %d piece%c of chicken left over!\n", (m - n), (m - n == 1)? '\0':'s');

    return 0;
}