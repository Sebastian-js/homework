<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int search(char* str, int target, int n){
	for(int i=0; i<n; i++){
		if(str[i]==target){
			return i;
		}
	}
	return -1;
}

void after_point(char* str, int pos){
	if(islower(str[pos+1])){
		str[pos+1]=toupper(str[pos+1]);
	}
}

int main(){

	int n=50;
	char str[n];

	scanf("%s", str);

	after_point(str, search(str, '.', n));

	printf("%s\n", str);

	return 0;
>>>>>>> 5a5ddc2a114563f635f8369c62f52448720ddda1
}