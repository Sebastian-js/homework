#include "stdio.h"
#include <stdbool.h>

int main(){
  int n;
  bool is_equal = true;
  printf("Enter lenght of the arrays: ");
  scanf("%d",&n);
  int vector_a[n], vector_b[n];
  
  for(int i=0; i<n; i++){
    printf("Enter value %d/%d of 1st array: ", i+1, n);
    scanf("%d",&vector_a[i]);
  }
  for(int i=0; i<n; i++){
    printf("Enter value %d/%d of 2nd array: ", i+1, n);
    scanf("%d",&vector_b[i]);
  }
  
  for(int i=0; i<n && is_equal;i++){
    if(vector_a[i]!=vector_b[i]){is_equal = false;}
  }
  
  printf("the arrays are%s equal.\n", is_equal ? "" : " not");
  
  return 0;
  
}