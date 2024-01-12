#include <stdio.h>

int average(int n, int* vett){
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=vett[i];
	}
	return sum/n;
}

int dev(int avg, int temp){
	return temp - avg;
}

int main(){
	int n, i;
	scanf("%d",&n);
	int vett_temps[n], vett_dev[n];

	for(i=0; i<n; i++){
		scanf("%d",&vett_temps[i]);
	}

	int avg = average(n, vett_temps);

	for(i=0; i<n; i++){
		vett_dev[i] = dev(avg, vett_temps[i]);
	}

	for(i=0; i<n; i++){
		printf("%d ", vett_dev[i]);
	}

	return 0;
}