//
//  Ex-1_Teams.c
//  Created by Sebastian Jusca on 22/09/2023.
//

#include "stdio.h"

int main(){
  int n, n_prog = 2, n_trian = 1;

  printf("Enter value: \n");
  scanf("%d",&n);

  for(int i = 0; i < n; i++){
    n_trian+=n_prog;
    n_prog++;
  }
  printf("%d\n", n_trian);

  return 0;
}