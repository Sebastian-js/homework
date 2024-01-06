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
}