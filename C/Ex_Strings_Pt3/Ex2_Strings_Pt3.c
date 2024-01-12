#include <stdio.h>
#include <ctype.h>
<<<<<<< HEAD

char smting(char str[]){
  for(int i=0; str[i]!='\0'; i++){
    if
  }
}

int main(){
  char str[] = "                    umpf";
  
  
}
=======
#include <string.h>

int search(char* str, int target, int n){
	for(int i=0; i<n; i++){
		if(!(str[i]==target)){
			return i;
		}
	}
	return -1;
}

void del_spaces(char* str, int n, int pos){
	for(int i=0; i<n; i++){
		str[i]=str[i+pos];
	}
}

int main(){
	int n=50;
	char str[] = "                      something something";

	//scanf("%s", str);

	del_spaces(str, n, search(str, ' ', n));

	printf("%s\n", str);

	return 0;
}
>>>>>>> 5a5ddc2a114563f635f8369c62f52448720ddda1
