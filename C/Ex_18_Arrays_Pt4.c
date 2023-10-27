#include "stdio.h"

int main(){
  int n, max=0, min, i_max, i_min=0;
  scanf("%d",&n);
  int vett[n];

  for(int i=0; i<n; i++){
    scanf("%d",&vett[i]);
  }
  min = vett[0];

  for(int i=0; i<n; i++){
    if(vett[i]%2==1){
      if(vett[i]>max){max = vett[i]; i_max = i;}
      else if(vett[i]<min){min = vett[i]; i_min = i;}
    }
  }
  printf("numeri letti:");
  for(int i=0; i<n; i++){
    printf(" %d", vett[i]);
    int a;
  }
  printf("\nmax = indice %d, valore %d\n", i_max, max);
  printf("min = indice %d, valore %d\n", i_min, min);
  

  return 0;
}