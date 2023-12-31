//
//  Ex-Functions.c
//  Created by Sebastian Jusca on 23/05/2023.
//

#include "stdio.h"

int MCD(int a, int b) {
	int j = 0;
	int dividends[20];

	for(int i = 0; i < a && i < b; i++) {
		if(a % i == 0 && b % i == 0) {
			j++;
			dividends[j-1] = i;
		}
	}

	return dividends[j];
}


int main() {
	
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);

	printf("%d\n", MCD(a, b));

	return 0;
}