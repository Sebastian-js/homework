//
//  Ex-3_Teams.c
//  Created by Sebastian Jusca on 22/09/2023.
//

#include "stdio.h"

int mcm(int a, int b) {
  int suma = a, sumb = b;
  while (suma != sumb) {
    if (suma < sumb) {suma+=a;}
    else {sumb+=b;}
  }
  return suma;
}

int main(){
  int a, b;

  printf("Enter values: \n");
  scanf("%d",&a);
  scanf("%d",&b);

  printf("%d", mcm(a,b));
  return 0;
}