#include <stdio.h>
#include <ctype.h>
#include <string.h>

void shift(char* str, int start, int length, int n){
	for(int i=start; i<n-length; i++){
		str[i]=str[i+length];
	}
}

int main(){
	int n=50, start, length;
	char str[n];

	scanf("%s", str);
	scanf("%d",&start);
	scanf("%d", &length);

	shift(str, start, length, n);

	printf("%s\n", str);

	return 0;
}