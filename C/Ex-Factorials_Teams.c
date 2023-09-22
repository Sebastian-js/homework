//
//  Ex-Factorials_Teams.c
//  Exercise Factorials Explained on Microsoft Teams
//  03042023
//
//  Created by Sebastian Jusca on 30/03/2023.
//


#include <stdio.h>

int main()
{
    int n, factorial, i;
    
    printf("Enter your factorial: ");
    scanf("%d",& n);
    
    factorial = 1;
    i = 1;
    
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }
    
    printf("The result of the factorial is: %d\n", factorial);
    
    return 0;
}
