// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXN 1000000

void deltad(int dist[], int N ){
  int min=0, i, j, k;
  for(i=0; i<N; i++) {
    // per ogni casa
    // calc delt
    min=k=0;
    for(j=i; j<N; j++) {
      dist[k] = abs(D[i]-D[j]);
      k++;
    }
  }
}

int N, i, j;
int D[MAXN], H[MAXN];

int main() {
  // uncomment the two following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  
  for (i = 0; i < N; ++i)
    assert(1 == scanf("%d", &D[i]));
  
  int k = N;
  int dist, min;
  
  printf("%d", N);
  for(i=1;i<n-1;i++){
    for(j=0;j<N;j++){
        
    }
  }
  
    H[i] = 
  }


  for (i = 0; i < N; ++i)
    printf("%d ", H[i]);
  printf("\n");

  return 0;
}