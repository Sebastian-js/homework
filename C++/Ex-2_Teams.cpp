//
//  Ex-2_Teams.cpp
//  Created by Sebastian Jusca on 22/09/2023.
//

#include <iostream>
using namespace std;

int main(){
  int n, n_disp = 1, n_pari = 0;

  cout << "Enter value: " << endl;
  cin >> n;

  for(int i = 0; i<n; i++){
   cout << n_disp + n_pari << " ";
    n_pari+=2;
    n_disp+=2;
  }

  return 0;
}