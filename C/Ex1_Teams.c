//
//  Ex1_Teams.c
//  Created by Sebastian Jusca on 22/09/2023.
//

void main(){
  int n_prog = 2, n_tring = 1, n;
  
  printf("Enter Value: \n");
  scanf("%d",&n);
  
  for(int i = 1; i < n; i++){
    n_tring += n_prog;
    n_prog++;
  }
  
  printf("%d\n", n_tring);
  
}