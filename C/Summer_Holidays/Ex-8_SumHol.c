//
//  Ex-8_HolSumm.c
//  Exercise 8 of 9 Explained on Microsoft Teams Summer School Holidays
//  25c78a90c16b668ff145a2566ea1e661af2f56e4
//
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"

int triangle(int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<i*2; j++){
			printf("*");
		}
		printf("*\n");
	}
	return n;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	triangle(n);

	return 0;
}