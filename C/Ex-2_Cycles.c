//
//  Ex-2_Cycles.c
//  Created by Sebastian Jusca on 23/04/2023.
//

#include "stdio.h"
#include "stdbool.h"

int main() {

  int n;
  bool prime = true;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 2; i < n && n != 0 && n != 1; ++i) {
  	//looks like 1 and 0 are not prime numbers
    if (n % i == 0) {
      prime = false;
      break;
    }
  }

  if (prime){printf("%d is a prime number.\n", n);}
  else {printf("%d is not a prime number.\n", n);}

  return 0;
}