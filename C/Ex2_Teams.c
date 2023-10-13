//
//  Ex2_Teams.c
//  Created by Sebastian Jusca on 22/09/2023.
//

#include "stdio.h"

void main(){
  int n, n_pari = 0, n_dispari = 1;
  
  printf("Enter value: \n");
  scanf("%d",&n);
  
  for(int i = 0; i < n; i++){
    printf("%d ", n_dispari + n_pari);
    n_pari+=2;
    n_dispari+=2;
  }
}