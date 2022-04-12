#include <cstdio>

int main() {
    int B, N; scanf("%d %d", &B, &N);
    int owes[20];
    while (B) {
        int i;
        bool isAverted = true;
        for (i = 0; i < B; i++)
            scanf("%d", owes + i);

        int d, c, v;
        while (N--) {
            scanf("%d %d %d", &d, &c, &v); 
            owes[d - 1] -= v;
            owes[c - 1] += v;
            for (i = 0; i < B; i++)
                if (owes[i] < 0)
                    isAverted = false;
        }

        isAverted? printf("S\n") : printf("N\n");
        scanf("%d %d", &B, &N);
    }

    return 0;
}
