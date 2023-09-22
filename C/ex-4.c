#include <stdio.h>
#include <string.h>

int main(){
	float sum;
	int i, n, high;
	char number[5];
	sum = high = i = 0;
	
	printf("Enter the number of people: ");
	scanf("%d",& n);

	float ppl[n];

	while(i < n){
		if(i%10 == 0 && i != 10){strcpy(number,"st");}
		else if((i-1)%10 == 0 && i != 11){strcpy(number,"nd");}
		else if((i-2)%10 == 0 && i != 12){strcpy(number,"rd");}
		else{strcpy(number,"th");}

		printf("Enter height of the %d%s person: ", i + 1, number);
		scanf("%f",& ppl[i]);

		sum += ppl[i];
		if(ppl[i] > 1.8){high++;}
		i++;
	}

	sum = sum / n;
	printf("The average height is %f m\n", sum);
	printf("%d people are taller than 1.8m\n", high);
	return 0;
}