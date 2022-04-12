#include <cstdio>

int main(int argc, char *argv) {
  int K, N, M, X, Y;

  while (scanf("%d", &K) && K != 0) {
    scanf("%d %d", &N, &M);
    for (int i = 0 ; i < K; i++) {

      scanf("%d %d", &X, &Y);
      if (X == N || Y == M)
        printf("division");
      if (X < N && Y > M)
        printf("NO");
      if (X > N && Y > M)
        printf("NE");
      if (X > N && Y < M)
        printf("SE");
      if (X < N && Y < M) 
        printf("SO");

      printf("\n");
    }
  }


  return 0; 
}
