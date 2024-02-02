#include <stdio.h>
#include <string.h>

int main(){

  int i, n=50, f1, f2; //f=frequenza
  char c; //c=carattere
  char str[n];

  FILE *c=freopen("input.txt", "r", stdin);
  FILE *d=freopen("output.txt", "w", stdout);

  scanf("%[^\n]s", str);

  for(i=0; str[i]!='\0'; i++){
    for()
  }

  printf("%s!", str);

  return 0;
}