//
//  Ex-7_HolSumm.c
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
