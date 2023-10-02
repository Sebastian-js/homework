#include "stdio.h"

int main(){
  int res=0, n;
  printf("Enter lenght of the array: ");
  scanf("%d",&n);
  int vector[n];
  
  for(int i=0; i<n; i++){
    printf("Enter value %d/%d:", i+1, n);
    scanf("%d",&vector[i]);
  }
  
  for(int i=0; i<n; i++){
    res += vector[i];
  }
  
  printf("The sum of the values in the arrays is %d", res);
  
  return 0;
}