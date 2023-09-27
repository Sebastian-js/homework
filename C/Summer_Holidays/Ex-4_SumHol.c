//
//  Ex-4_HolSumm.c
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