//
//  Ex-1_Teams.cpp
//  Created by Sebastian Jusca on 22/09/2023.
//

#include <iostream>
using namespace std;

int main(){
  int n, n_prog = 2, n_trian = 1;
  
  cout << "Enter value: " << endl;
  cin >> n;
  
  for(int i = 1; i < n; i++){
    n_trian+=n_prog;
    n_prog++;
  }
  
  cout << n_trian << endl;
  
  return 0;
}