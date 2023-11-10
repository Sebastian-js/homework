#include "stdio.h"

E

int main(){
  int n, da_cercare;
  printf("Grandezza vettore: ");
  scanf("%d",&n);
  printf("Valore da cercare: ");
  scanf("%d",&da_cercare);
  int vett[n];
  
  for(int i=0; i<n; i++){
    printf("Valore %d di %d: ", i+1, n);
    scanf("%d",&vett[i]);
  }
  
  return 0;
}