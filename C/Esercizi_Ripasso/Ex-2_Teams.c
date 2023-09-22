//
//  Ex-2_Teams.c
//  Created by Sebastian Jusca on 22/09/2023.
//

#include "stdio.h"

int main(){
  int n, n_disp = 1, n_pari = 0;

  printf("Enter value: \n");
  scanf("%d",&n);

  for(int i = 0; i<n; i++){
    printf("%d ", n_disp + n_pari);
    n_pari+=2;
    n_disp+=2;
  }
  
  return 0;
}