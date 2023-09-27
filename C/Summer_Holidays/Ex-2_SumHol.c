//
//  Ex-2_HolSumm.c
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"

int sqrt(int n){
	int res;
	for(int i = 1; i * i <= n; i++){
		res = i;
	}
	return res;
}

int main(){
	int a;

	scanf("%d",&a);
	printf("Square root of %d is %d.\n", a, sqrt(a));

	return 0;
}
