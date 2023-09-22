//
//  Ex-38_Page-142.c
//  Created by Sebastian Jusca on 28/03/2023.
//

#include <stdio.h>

int main()
{
    char teamName[200];
    int wonGames, evenGames, points;
    
    printf("Enter your team's name: ");
    scanf("%s", teamName);
    
    printf("Enter your team's won games: ");
    scanf("%d",& wonGames);
    
    printf("Enter your team's even games: ");
    scanf("%d",& evenGames);
    
    points = evenGames + 2*(wonGames);
    
    printf("For won games your team got 2 points, for the even ones just 1 point. \nYour team '%s' received %d points in total.\n", teamName, points);
    
    return 0;
}
