#include "stdio.h"

int find(int* vett, int n, int to_find){
  for(int i=0; i<n; i++){
    if(vett[i]==to_find){
        return i;
    }
  }
  return -1;
}

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
  if(find(vett, n, da_cercare)<0){
    printf("non esiste");
    return 0;
  }
  
  printf("il valore %d si trova all'indice %d", da_cercare, find(vett, n, da_cercare));
  
  return 0;
}