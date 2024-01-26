// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int A, B, C, D, T, test;

int main() {
  // uncomment the two following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &T));
  for (test = 1; test <= T; ++test) {
    assert(2 == scanf("%d%d", &A, &B));

    C = D = -1;
    
    if(A<=B){}
    else {
      if(A%11==0){
        
      }
    }
    

    printf("%d %d\n", C, D);
  }

  return 0;
}