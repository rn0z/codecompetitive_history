#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long int x, y;
    while (cin >> x >> y) {
        cout << abs(y - x) << endl;
    }

    return 0;
}