//
//  Ex-3_Teams.cpp
//  Created by Sebastian Jusca on 22/09/2023.
//

#include <iostream>
using namespace std;

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

  cout << "Enter values: " << endl;
  cin >> a;
  cin >> b;

  cout << mcm(a, b) << endl;
  return 0;
}