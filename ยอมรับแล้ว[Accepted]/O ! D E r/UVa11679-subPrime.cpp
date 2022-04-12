#include <cstdio>

int main() {

    int B, N, owe, owed, amount;
    int owes[20] = {0};

    while (scanf("%d %d", &B, &N) && B != 0 && N != 0) {
        int i;
        for (i = 0; i < B; ++i)
           scanf("%d", owes + i); 

        for (i = 0; i < N; ++i) {
            scanf("%d %d %d", &owe, &owed, &amount);
            owes[owe - 1] -= amount;
            owes[owed - 1] += amount; 
        }

        bool positive(true); 
        for (i = 0; i < B; ++i)
            if (owes[i] < 0)
               positive = false;

        positive? printf("S\n") : printf("N\n");
    }

   return 0;
} 
