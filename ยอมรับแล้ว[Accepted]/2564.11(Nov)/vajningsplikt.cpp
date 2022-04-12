#include <iostream>
using namespace std;

int main() {

    string a{}, b{}, c{};

    cin >> a >> b >> c;

    if (a[0] == 'N') {
        if (b[0] == 'S') {
            if (c[0] == 'W') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else if (b[0] == 'E') {
            if (c[0] == 'S' || c[0] == 'W') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else {
            printf("No");
        }
    } else if (a[0] == 'W') {
        if (b[0] == 'N') {
            if (c[0] == 'E' || c[0] == 'S') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else if (b[0] == 'E') {
            if (c[0] == 'S') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else {
            printf("No");
        }
    } else if (a[0] == 'E') {
        if (b[0] == 'S') {
            if (c[0] == 'W' || c[0] == 'N') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else if (b[0] == 'W') {
            if (c[0] == 'N') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else {
            printf("No");
        }
    } else if (a[0] == 'S') {
        if (b[0] == 'N') {
            if (c[0] == 'E') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else if (b[0] == 'W') {
            if (c[0] == 'N' || c[0] == 'E') {
                printf("Yes");
            } else {
                printf("No");
            }
        } else {
            printf("No");
        }
    } else {
        printf("No");
    }
    printf("\n");

    return 0;
}