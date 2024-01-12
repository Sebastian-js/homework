#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  char word[50];
  char filePath[] = "C:\\Users\\JUSCASEBASTIAN\\Documents\\homework\\C\\Strings_PLUS\\input.txt";
  char outputPath[] = "C:\\Users\\JUSCASEBASTIAN\\Documents\\homework\\C\\Strings_PLUS\\output.txt";
  char text[100][50];
  int wordings[100];
  int words=0, i;


  FILE *input = fopen(filePath, "r");
  FILE *output = fopen(outputPath, "w");
  
  while(fscanf(input, "%s", word)!=EOF){
    fscanf(input, "%s", text[words]);
    words++;
  }
  
  for(i=0; i<words; i++){
    
  }
  
  
  
  return 0;
  
}