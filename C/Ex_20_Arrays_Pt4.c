#include "stdio.h"
#include <stdbool.h>

int main(){
  int n;
  bool eq=true;
  
  printf("Enter size of arrays: ");
  scanf("%d",&n);
  int vett1[n], vett2[n];
  
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del vettore 1: ", i+1, n);
    scanf("%d",&vett1[i]);
  }
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del vettore 2: ", i+1, n);
    scanf("%d",&vett2[i]);
  }
  
  for(int i=0; i<n; i++){
    if(vett1[i]!=vett2[i]){eq=false;}
  }
  
  printf("The arrays %s equal.\n", eq ? "are" : "aren't");
  return 0;
  
}