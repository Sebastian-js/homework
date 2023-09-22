//
//  Ex-6_HolSumm.c
//  Exercise 6 of 9 Explained on Microsoft Teams Summer School Holidays
//  447bb79abc08811c992a31e55dfc198aedb782f0
//
//  Created by Sebastian Jusca on 21/06/2023.
//


#include "stdio.h"
#include <stdbool.h>

bool is_perfect(int n){
	int sum=0;
	for(int i = 0; i < n;i++){
		if(n % i == 0){sum+=i;}
	}
	return sum==n ? true : false;
}


int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	printf("%d is%s a perfect number.\n", n, is_perfect(n) ? "" : " not");

	return 0;
}