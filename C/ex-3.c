#include <stdio.h>

int main(){
	int F0, F1, Fn, n, i;
	F0 = i = 0;
	F1 = 1;

	scanf("%d",& n);

	while(i<n){
		printf("%d\n", F0);
		Fn = F0 + F1;
		F0 = F1;
		F1 = Fn;
		i++;
	}
	return 0;
}