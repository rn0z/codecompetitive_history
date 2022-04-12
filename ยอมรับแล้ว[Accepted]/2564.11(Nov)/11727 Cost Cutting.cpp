#include <iostream>
#define max(a, b) ((a)>(b)?(a):(b))

using namespace std;
int main() {

    int tc; cin >> tc;
    int count = 1;
    while (tc--) {
        int x, y, z;
        int mean{};
        scanf("%d %d %d", &x, &y, &z);

        if ((x > y && x < z) || (x > z && x < y)) {
            mean = x;
        } else if ((y > x && y < z) || (y > z && y < x)) {
            mean = y;
        } else if ((z > y && z < x) || (z > x && z < y)) {
            mean = z;
        }
        printf("Case %d: %d\n", count, mean);

        ++count;
    }
    return 0;
}