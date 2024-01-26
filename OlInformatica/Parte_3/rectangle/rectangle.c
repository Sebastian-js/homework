#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000

int       N, i, a=0, b=0;
int       S[MAXN];
long long A;

int cmp(const void *a, const void *b){
  int primo = *(int *)a;
  int secondo = *(int *)b;
  if(primo<secondo) return 1;
  if(primo>secondo) return -1;
  return 0;
}

int main() {
  // uncomment the two following lines if you want to read/write from files
  FILE *c=freopen("input.txt", "r", stdin);
  FILE *d=freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));

  for (i = 0; i < N; ++i)
    assert(1 == scanf("%d", &S[i]));
  
  qsort(S, N, sizeof(int), cmp);
  
  for(i=0; i<N; i++){
    if(S[i]==S[i+1]){
      a=i;
      break;
    }
  }
  b=a;
  for(i=a+2; i<N; i++){
    if(S[i]==S[i+1]){
      b=i;
      break;
    }
  }
  if(b==a){
    b++;
    S[b]=0;
  }
  
 // printf("%d\n", a);
 // printf("%d\n", b);
  
 /* for(i=0; i<N; i++){
    printf("%d ", S[i]);
  }
  */
  A=(long long)S[a]*S[b];
  
  printf("%lld", A);

  return 0;
}