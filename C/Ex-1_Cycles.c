//
//  Ex-1_Cycles.c
//  Exercise 1 about Cycles Explained on Microsoft Teams
//  f88f98c58ea8ab845ce1c1d53cda8ef278650331
//
//  Created by Sebastian Jusca on 23/04/2023.
//

#include "stdio.h"
#include "math.h"

int main(){

	float b, n, res;
	res = 1;

	printf("Enter your parameters(b n): ");
 	if(scanf("%f %f",&b,&n) == 2) {} 
 	else {puts("Error. Please enter 2 integers");} 

	for(int i = 0; i<n; i++){res*=b;}
	printf("The result is %f\n", res);

	return 0;
}