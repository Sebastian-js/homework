#include "stdio.h"

int main(){
  int n;
  printf("Inserisci la grandezza dei vettori.\n");
  scanf("%d",&n);
  int vett[n],vett_pari[n/2],vett_dispari[n/2];
  
  for(int i=0; i<n; i++){
    printf("Scrivi valore %d/%d del vettore: ", i+1, n);
    scanf("%d",&vett[i]);
  }
  
  for(int i=0; i<n; i++){
    if(i%2==0){vett_pari[i/2]=vett[i];}
    else{vett_dispari[(i-1)/2]=vett[i];}
  }
  
  printf("Valori nelle caselle pari: \n");
  for(int i=0; i<n/2; i++){
    printf("%d ", vett_pari[i]);
  }
  
  printf("\nValori nelle caselle dispari: \n");
  for(int i=0; i<n/2; i++){
    printf("%d ", vett_dispari[i]);
  }
  
  return 0;
}