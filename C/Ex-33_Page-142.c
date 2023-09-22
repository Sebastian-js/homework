//
//  Ex-33_Page-142.c
//  Exercise 33 Page 142
//  29042023
//
//  Created by Sebastian Jusca on 28/03/2023.
//

#include <stdio.h>

int main()
{
    float price, discPrice;
    
    printf("Enter your total: ");
    scanf("%f",& price);
    
    if(price < 100){
        discPrice = price * 0.05;
    }else if (price >= 200){
        discPrice = price * 0.15;}
    else{
        discPrice = price * 0.1;
    }
    
    price = price - discPrice;
    
    printf("Your discounted price is %f €\n", price);
    
    return 0;
}
