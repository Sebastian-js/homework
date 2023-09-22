//
//  Ex_2.c
//  Esercizi_Aggiuntivi
//
//  Created by Sebastian Jusca on 03/04/2023.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char inputWord[40];
    scanf("%s", inputWord);
    
    for (int i = 0; i < sizeof(inputWord); i++){
        if (ispunct(inputWord[i])){
            inputWord[i] = 127;
        }
    }
    
    printf("%s \n", inputWord);
    return 0;
}
