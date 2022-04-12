#include <iostream>
#include <cstdio>

int count(std::string text) {
    int result = 0, i, len = text.length();
    for (i = 0; i < len; ++i) {
        if (text[i] >= 'a' && text[i] <= 'z')
            result += text[i] - 'a' + 1;
        if (text[i] >= 'A' && text[i] <= 'Z')
            result += text[i] - 'A' + 1;
    }
    return result;
}

int sum(int a) {
    while (a >= 10) {
        int tmp = 0;
        while (a > 0)
            tmp += a % 10, a /= 10;  
        a = tmp;
    } 
    return a;
}

int main() {
    std::string a, b;
    while (std::cin >> a >> b) {
        int x = count(a), y = count(b);
        x = sum(x), y = sum(y); 

        (x > y)? printf("%.2lf %%", 100 * (float)y / x)
               : printf("%.2lf %%", 100 * (float)x / y);
        printf("\n");
    }

    return 0;
}
