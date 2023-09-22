//
//  Ex_1.c
//  Created by Sebastian Jusca on 03/04/2023.
//

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char inputWord[40];
    int i = 0;
    scanf("%s", inputWord);
    
    while (inputWord[i]){
        inputWord[i] = tolower(inputWord[i]);
        i++;
    }
    
    inputWord[0] = toupper(inputWord[0]);
    printf("%s \n", inputWord);
    return 0;
}