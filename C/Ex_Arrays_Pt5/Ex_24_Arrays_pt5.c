#include "stdio.h"
#include <stdbool.h>

int main(){
  int n, temp;
  bool palyndrome=true;
  scanf("%d",&n);
  int vett[n];
  
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del vettore: ", i+1, n);
    scanf("%d",&vett[i]);
  }
  
  for(int i=0; i<n/2; i++){
    temp=vett[(n-1)-i];
    if(vett[i]!=temp){palyndrome=false;}
  }
  
  printf("The array: [ ");
  for(int i=0; i<n; i++){
    printf("%d ",vett[i]);
  }
  printf("] %s palyndrome.\n", palyndrome ? "is" : "isn't");
  
  return 0;
}