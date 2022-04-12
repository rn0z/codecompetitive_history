#include <iostream>
#include <math.h>

int main() {
    double miles{}; std::cin >> miles;
    std::cout << (int)(round(miles * 1000 * 5280 / 4854))<< std::endl;

    return 0;
}