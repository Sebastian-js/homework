//
//  Ex-5_HolSumm.c
//  Exercise 5 of 9 Explained on Microsoft Teams Summer School Holidays
//  818ee921b53834e300b5c4b98d14b2cd02af136f
//
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"
#include <stdbool.h>

int power(int b, int e){
	int res=1;
	while(e>0){
		res*=b;
		e--;
	}
	return res;
}

int num_digits(int n){
	int c=0, i=1;
	while(n%i!=n){
		i*=10;
		c++;
	}
	return c;

}

bool is_armstrong(int n){
	int sum=0, j=num_digits(n);
	for(int i = 1; i<=n; i*=10){
		sum+=power(((n/i)%10),j);
	}
	return sum==n ? true : false;
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	printf("%d is%s an armstrong number.\n", n, is_armstrong(n) ? "" : " not");

	return 0;
}
