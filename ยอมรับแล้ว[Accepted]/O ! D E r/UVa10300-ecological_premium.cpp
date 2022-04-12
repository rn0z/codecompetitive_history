#include <cstdio>

int main(void) {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b, c, m;
        int rs = 0;
        scanf("%i", &m);
        while (m--) {
            scanf("%d %i %d", &a, &b, &c); 
            rs += a * c;
        }
        printf("%d\n", rs);
    }

    return 0;
}
