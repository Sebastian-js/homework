//
//  Ex-40_Teams.c
//  Ex 40 Explained on Microsoft Teams
//  30042023
//
//  Created by Sebastian Jusca on 29/03/2023.
//

#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter your year: ");
    scanf("%d",& year);
    
    if(year % 4 != 0){
        printf("The year %d is not a leap year.\n", year);
    }else if(year % 100 == 0 && year % 400 != 0){
        printf("The year %d is not a leap year.\n", year);
    }else{
        printf("The year %d is a leap year.\n", year);
    }
    
    return 0;
}
