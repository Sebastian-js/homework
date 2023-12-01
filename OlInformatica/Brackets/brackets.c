// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXS 128
#define MAXN 200

int  N, i, j;
int  A[MAXN];
char ans[MAXS];

int main() {
  // uncomment the two following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));

  for (i = 0; i < N; ++i)
    assert(1 == scanf("%d", &A[i]));

  ans[0] = 0;

  for(i=0; i<N; i++){
    for(j=0; j<A[i]; j++){
      
    }
  }
  


  printf("%s\n", ans);

  return 0;
}