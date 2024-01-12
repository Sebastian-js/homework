#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(){

  char str[200];

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  scanf("%s", str);

  for(int i=0; i<200; i++){
    if(str[i]=='.' && islower(str[i+1])){
      str[i+1] = toupper(str[i+1]);
    }
  }

  printf("%s", str);

  return 0;
}