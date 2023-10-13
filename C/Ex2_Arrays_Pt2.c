#include "stdio.h"

int prodotto_scalare(int n, int* vett1, int* vett2){
  int sum=0;
  for(int i=0; i<n; i++){
    sum += vett1[i] * vett2[i];
  }
  return sum;
}

int main(){
  int n;
  printf("Inserisci la grandezza dei vettori.\n");
  scanf("%d",&n);
  
  if(n>100){
    printf("Vettori troppo grandi, scrivi un valore piu piccolo di 100.\n");
    scanf("%d",&n);
  }
  
  int vett1[n], vett2[n];
  
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del primo vettore: ", i+1, n);
    scanf("%d",&vett1[i]);
  }
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del secondo vettore: ", i+1, n);
    scanf("%d",&vett2[i]);
  }
  
  printf("Il prodotto scalare tra i due vettori è %d.\n", prodotto_scalare(n, vett1, vett2));
  
  return 0;
}