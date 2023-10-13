//
//  Ex1_Arrays_Pt2.c
//  Created by Sebastian Jusca on 13/10/2023.
//
#include "stdio.h"

int main(){
  int n=10, n_pari=0, n_dispari=0;
  int vett[n];
  
  for(int i=0; i<n; i++){
    scanf("%d",&vett[i]);
  }
  
  for(int i=0; i<n; i++){
    if(vett[i]%2==0){n_pari++;}
    else{n_dispari++;}
  }
  
  printf("%d even numbers.\n", n_pari);
  printf("%d odd numbers.\n", n_dispari);
  
  return 0;
}