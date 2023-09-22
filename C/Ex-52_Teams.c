//
//  Ex-52_Teams.c
//  Created by Sebastian Jusca on 29/03/2023.
//

#include <stdio.h>

int main()
{
    int h, min, s, seconds;
    
    printf("Enter number of hours: ");
    scanf("%d",& h);
    
    printf("Enter number of minutes: ");
    scanf("%d",& min);
    
    printf("Enter number of seconds: ");
    scanf("%d",& s);
    
    seconds = (h * 3600) + (min * 60) + s;
    
    printf("%d:%d:%d are in total %d seconds.\n", h, min, s, seconds);
    
    return 0;

}
