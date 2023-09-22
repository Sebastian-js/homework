//
//  Ex-4_HolSumm.c
//  Exercise 4 of 9 Explained on Microsoft Teams Summer School Holidays
//  c971ad6fc8ab8ba8b490405940895905954ab087
//
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i <= n;i++){
		if(n % i == 0){printf("%d ", i);}
	}

	return 0;
}