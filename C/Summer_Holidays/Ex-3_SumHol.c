//
//  Ex-3_HolSumm.c
//  Created by Sebastian Jusca on 21/06/2023.
//

#include "stdio.h"

int main(){
	int n, max, min;

	for (int i = 0; i < 10; i++) {
        scanf("%d", &n);

        if (i == 0) {
            max = min = n;
        } else {
            max = (n > max) ? n : max;
            min = (n < min) ? n : min;
        }
    }

	printf("%d is the max, %d is the min.\n", max, min);

	return 0;
}