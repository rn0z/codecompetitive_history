#include <bits/stdc++.h>

using namespace std; 

int main() {
    int t, x, y, a, b;
    while (std::cin >> t && t != 0) {
        std::cin >> x >> y;
        for (int i = 0; i < t; i++) {
            std::cin >> a >> b;
            if (a == x || b == y) std::cout << "divisa"; 
            else if (a > x && b > y) std::cout << "NE";
            else if (a < x && b > y) std::cout << "NO";
            else if (a > x && b < y) std::cout << "SE";
            else if (a < x && b < y)  std::cout << "SO"; 
            std::cout << '\n';
        }
    }


    return 0;
}