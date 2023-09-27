//
//  Ex-9_HolSumm.c
//  Created by Sebastian Jusca on 26/07/2023.
//

#include "stdio.h"
#include "Ex-7_SumHol.c"

void pascal_triangle(int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<=i; j++){
			printf("%d ", binomial(i, j));
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	pascal_triangle(n);
	return 0;
}