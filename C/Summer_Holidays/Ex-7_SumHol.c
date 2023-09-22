//
//  Ex-7_HolSumm.c
//  Exercise 7 of 9 Explained on Microsoft Teams Summer School Holidays
//  dd73476d2c86bded2e227719fcc0a06a0859cc06
//
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"

int factorial(int n){
	int res = 1;
	for(int i = 1; i<=n;i++){
		res*=i;
	}
	return res;
}

int binomial(int n, int k){
	int res = factorial(n-k)*factorial(k);
	return n < k ? 0 : (factorial(n)/res);
}
