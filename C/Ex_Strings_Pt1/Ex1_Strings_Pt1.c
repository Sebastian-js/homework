#include <assert.h>
#include <stdio.h>

int main(){
  
  char str[50];
  int cap=0, lowcase=0;
  
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  
  scanf("%s", str);
  
  for(int i=0; i<50; i++){
    if(str[i]<='Z' && str[i]>='A'){
      cap++;
    }
    if(str[i]<='z' && str[i]>='a'){
      lowcase++;
    }
  }
  
  printf("There are %d uppercase letters and %d lowercase letters.\n", cap, lowcase);
  
  return 0;
}