//
//  Ex_3.c
//  Created by Sebastian Jusca on 03/04/2023.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wordFormat(char* word){
	int j, i;
	for(i = j = 0; i < strlen(word); i++){
		if(isalpha(word[i])){
			word[i-j] = (i - j == 0) ? toupper(word[i]) : tolower(word[i]);
		} else {
			j++;
		}
	}
	word[i-j] = '\0';
}


int main(){

	char word[50];
	char differentWords[100][50];
	char filePath[50] = "/Users/sebasty10/Downloads/nurseryrhyme.txt";
	char outputPath[50] = "/Users/sebasty10/Downloads/out.txt";
	int i, j, n, skip;
	j = i = n = 0;

	FILE *input = fopen(filePath, "r");

	while(fscanf(input, "%s", word) != EOF){
		wordFormat(word);
		skip = i = 0;
		
		// check if word is already in the array
		while (i<n) {
			if (!strcmp(differentWords[i], word)) {
				skip = 1;
			}
			i++;
		}

		// skip the while run
		if (skip) {continue;}

		// write the word in the array
		while (word[j] != '\0') {
			differentWords[n][j] = word[j];
			j++;
		}
		differentWords[n][j] = '\0'; j=0; n++;
	}

	fclose(input);

	FILE *out = fopen(outputPath, "w+");
	if (!out) {
		printf("Failed to open file %s\n", outputPath);
		exit(1);
	}

	fprintf(out, "le parole distinte sono %d:\n", n);
	for (i=0; i<n; i++) {
		fprintf(out, "%s\n", differentWords[i]);
	}

	fclose(out);
	return 0;
}

