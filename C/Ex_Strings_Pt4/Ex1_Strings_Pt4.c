#include <stdio.h>
#include <string.h>

/*
int strlunghezza(char *str){
  int i;
  for(i=0; str[i]!='\0'; i++){}
  return i;
}
*/

int main(){
  
  int i, n=50;
  char str[n];
  
  FILE *c=freopen("input.txt", "r", stdin);
  FILE *d=freopen("output.txt", "w", stdout);

  scanf("%[^\n]s", str);
  
  for(i=strlen(str)-1; i>0; i--){
    if(str[i]==' ' && str[i-1] != ' '){
      str[i]='\0';
      break;
    }
  }
  
  printf("%s!", str);
  
  return 0;
}