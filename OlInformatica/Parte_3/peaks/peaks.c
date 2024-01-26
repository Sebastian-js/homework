#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXM 100000
#define MAXN 100000

int       M, N, i, j;
int       A[MAXN];
int       B[MAXM];
int       BI[MAXN+2][MAXM+2];
long long P;

int main() {
  // uncomment the two following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  assert(2 == scanf("%d%d", &N, &M));

  for (i = 0; i < N; ++i)
    assert(1 == scanf("%d", &A[i]));

  for (i = 0; i < M; ++i)
    assert(1 == scanf("%d", &B[i]));
  
  /*
  for(j=0; j<M; j++){
    BI[0][j]=0;
    BI[M][j]=0;
  }
  for(i=0; i<N; i++){
    BI[i][0]=0;
    BI[i][N]=0;
  }
  */
  
  for (i = 1; i <= N; i++){
    for (j = 1; j <= M; j++){
      BI[i][j] = A[i] * B[j];
    }
  }
  
  for (i = 0; i < N; i++){
    for(j = 0; j < M; j++){
      printf("%d ", BI[i][j]);
    }
    printf("\n");
  }
  
 // printf("%lld\n", P);

  return 0;
}