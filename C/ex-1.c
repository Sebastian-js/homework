#include <stdio.h>

int main(){
	int n, sum, i;
	sum = i = 0;

	while(i < 15){
		scanf("%d",& n);
		if(n%2==1){sum += n;}
		i++;

	}

	printf("%d\n", sum);
	return 0;
}