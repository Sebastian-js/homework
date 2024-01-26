#include <stdio.h>
#include <string.h>

void eliminaCaratteri(char* str,int start, int len){
  int i;
  for(i=start;str[i+len]!='\0';i++){
    str[i]=str[i+len];
  }
  str[i]='\0';
}

int main(){
  char str[150];
  char word[150];
  int i,j,flag=1;


  scanf("%[^\n]s",str);
  scanf("%s",word);

  for(i=0;frase[i]!='\0';i++){
    if(parola[0]==frase[i]){
      flag=1;
      for (j=0; parola[j]!='\0'; j++) {
        if(parola[j]!=frase[i+j]){
          flag=0;
        }
      }
      if(flag==1){
        eliminaCaratteri(frase,i,j);
      }
    }

  }


  return 0;
}