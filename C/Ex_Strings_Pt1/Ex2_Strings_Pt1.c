#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(){
  
  char str[100];
  
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  scanf("%s", str);
  
  for(int i=0; i<100; i++){
    if(isupper(str[i])){
      str[i] = tolower(str[i]);
    }
  }
  
  printf("%s", str);
  
  return 0;
}