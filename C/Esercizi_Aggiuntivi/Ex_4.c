//
//  Ex_4.c
//  Created by Sebastian Jusca.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char word[50];
	char filePath[50] = "/Users/sebasty10/Downloads/icecream.txt";
	char outputPath[50] = "/Users/sebasty10/Downloads/out.txt";
	char text[100][50];
	int ntaste, nsells;

	FILE *input = fopen(filePath, "r");

	fscanf(input, "%s", word);

	//bwhile(fscanf(input, "%s", word) != EOF){

		

		// output name of tastes and their total rewards in order more to less

		printf("%d", word[0]);


	// }

}
