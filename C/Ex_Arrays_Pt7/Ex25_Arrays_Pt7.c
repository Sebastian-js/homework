#include <stdio.h>
#include <stdbool.h>

bool binary_search(int* vett, int n, int target){
	 int start=0, end=n-1;
	 while(start <= end){
	 	int mid = start + (end-start)/2;
	 	if(vett[mid]==target)
	 		return true;
	 	if(vett[mid]<target)
	 		start = mid + 1;
	 	else
	 		end = mid -1;
	 }
	 return false;
}

int main(){
	int n, j=0, i;
	scanf("%d",&n);
	int vett1[n], vett2[n];

	for(i=0; i<n; i++){
		scanf("%d",&vett1[i]);
	}

	for(i=0; i<n; i++){
		if(!binary_search(vett2, j, vett1[i])){
			vett2[j]=vett1[i];
			j++;
		}
	}

	for(i=0; i<n; i++){
		printf("%d ", vett1[i]);
	}
	printf("\n");
	for(i=0; i<j; i++){
		printf("%d ", vett2[i]);
	}

	return 0;

}