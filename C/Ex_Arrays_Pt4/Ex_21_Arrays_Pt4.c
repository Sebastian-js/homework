#include "stdio.h"
#include <stdbool.h>

bool eq(int* vett1, int* vett2, int n){
  for(int i=0; i<n; i++){
    if(vett1[i]!=vett2[i]){return false;}
  }
  return true;
}

int main(){
  int n;

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

  printf("The arrays %s equal.\n", eq(vett1, vett2, n) ? "are" : "aren't");
  return 0;

}