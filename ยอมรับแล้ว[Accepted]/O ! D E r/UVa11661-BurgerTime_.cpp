#include <cstdio>

int main() {

    int l, i; 
    while (scanf("%d", &l), l != 0) {
        char s[l];
        scanf("%s", s);

        int dis = (1 << 31) - 1;
        int r = -1, d = -1;
        for (i = 0; i < l; ++i) {
            if (s[i] =='Z') {
                dis  = 0;
                break; 
            }
            if (s[i] == 'R') { r = i; }
            if (s[i] == 'D') { d = i; }
            if (r != -1 && d != -1) {
                if (r - d > 0 && dis > r - d) {
                    dis = r - d;
                }
                if (d - r > 0 && dis > d - r) {
                    dis= d - r;
                }
            }
        }
        printf("%d\n", dis);
    } 

    return 0;
}
