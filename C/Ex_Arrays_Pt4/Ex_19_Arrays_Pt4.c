#include "stdio.h"

int main(){
  int n;
  scanf("%d",&n);
  int vett[n];
  
  for(int i=0; i<n; i++){
    scanf("%d",&vett[i]);
  }
  
  printf("Before: ");
  for(int i=0; i<n; i++){
    printf(" %d", vett[i]);
  }
  
  for(int i=0; i<n; i++){
    if(vett[i]%2==1){
      vett[i]-=1;
    } else {vett[i]+=1;}
  }
  
  printf("\nAfter: ");
  for(int i=0; i<n; i++){
    printf(" %d", vett[i]);
  }
  
  return 0;
}