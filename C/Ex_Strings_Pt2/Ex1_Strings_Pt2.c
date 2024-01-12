#include <stdio.h>

int end_search(char* str, int n, char target){
	for(int i=0; i<n; i++){
		if(str[i]==target){
			return i;
		}
	}
	return -1;
}

void str_adder(char* str1, char* str2, int n){
	int end = end_search(str1, n, '\0'), i;

  	for(i=0; i<n; i++){
  		str1[i+end] = str2[i];
  	}
}

int main(){
	
	int n=50;
	char str1[n], str2[n];

  	scanf("%s", str1);
  	scanf("%s", str2);

  	str_adder(str1, str2, n);

  	printf("%s\n", str1);

  	return 0;
}