#include <stdio.h>
#include <stdbool.h>

bool search(int* vett, int n, int target){
	 for(int i=0; i<n; i++){
		 if(vett[i]==target)
			 return true;
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
		if(!search(vett2, j, vett1[i])){
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
