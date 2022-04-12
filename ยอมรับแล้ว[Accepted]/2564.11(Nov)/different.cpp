#include <iostream>
#include <math.h>

int main() {
    using namespace std;
    long long a, b;
    while (cin >> a >> b) {
        cout <<  abs(a - b) << '\n';
    }

    return 0;
}