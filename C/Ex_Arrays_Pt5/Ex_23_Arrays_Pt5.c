#include "stdio.h"

int main(){
  int n, temp1, temp2;
  scanf("%d",&n);
  int vett[n];
  
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del vettore: ", i+1, n);
    scanf("%d",&vett[i]);
  }
  
  printf("Vettore: ");
  for(int i=0; i<n; i++){
    printf("%d ", vett[i]);
  }
  
  for(int i=0; i<n/2; i++){
    temp1=vett[i];
    temp2=vett[(n-1)-i];
    vett[(n-1)-i]=temp1;
    vett[i]=temp2;
  }
  
  printf("\nVettore simmetrico: ");
  for(int i=0; i<n; i++){
    printf("%d ", vett[i]);
  }
  
  return 0;
}