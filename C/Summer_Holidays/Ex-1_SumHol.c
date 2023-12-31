//
//  Ex-1_HolSumm.c
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"
#include <stdbool.h>

int sum(int a, int b){
	int sum=0, min , max;
	if(a==b){return sum;}
	min = (a<b) ? a : b;
	max = (a<b) ? b : a;
	for(int i = min + 1; i < max; i++){
		sum+=i;
	}
	return sum;
}

int main() {
	int a, b;

	scanf("%d %d",& a,& b);
	printf("%d %s %d and the sum of the integer values between them is %d.\n", a, a<b ? "<" : ">", b, sum(a, b));

	return 0;
}