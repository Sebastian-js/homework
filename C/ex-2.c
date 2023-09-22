//
//  ex-2.c
//  Created by Sebastian Jusca.
//

#include <stdio.h>

int main(){
	int month, days;

	printf("Enter the number of the month: ");
	scanf("%d",& month);

	if(month < 8){
		if(month%2==1){days = 31;}
		else if(month == 2){days = 28;}
		else{days = 30;}
	}else{
		if(month%2==0){days = 31;}
		else{days = 30;}
	}

	printf("%d days.\n", days);
	return 0;
}