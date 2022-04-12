#include <bits/stdc++.h>

using namespace std;

int main() {

    //ios::sync_with_stdio(false);

    int tc; cin >> tc;

    while (tc--) {
        char s[41]{};
        int post_sec{}, born{}, course{};
        scanf("%s %d/%*d/%*d %d/%*d/%*d %d", s, &post_sec, &born, &course);
        if (born >= 1991 || post_sec >= 2010) {
            printf("%s eligible", s);
        } else if (course > 40) {
            printf("%s ineligible", s);
        } else {
            printf("%s coach petitions", s);
        }
        printf("\n");
    }


    return 0;
}