#include "stdio.h"

int main(){
  int n, j=0;
  printf("Enter size of array: ");
  scanf("%d",&n);
  int vett[n], symm_vett[n];
  
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del vettore: ", i+1, n);
    scanf("%d",&vett[i]);
  }
  
  for(int i=n-1; i>=0; i--){
    symm_vett[j]=vett[i];
    j++;
  }
  printf("Vettore: ");
  for(int i=0; i<n; i++){
    printf("%d ", vett[i]);
  }
  printf("\nVettore simmetrico: ");
  for(int i=0; i<n; i++){
    printf("%d ", symm_vett[i]);
  }
  
  
  return 0;
}