#include <stdio.h>
#include "RSP.h"
#include "bbopgi.h"


void main()
{
  int a;
  printf("Choose Game!!\n");
  printf("1. BBopgi Game      2. Rock Scissors Paper\n");
  printf("3. BR 31            4. Russian Roulette;\n");
  
  while(1){
    scanf("%d",&a);
    if( a == 1){
      bbopgi();
      break;
    }
    else if( a == 2){
      RSP();
      break;
    }
    else if( a == 3){
      //31();
      break;
    }
    else if( a == 4){
      //
      break;
    }
    else{
      printf("Please Choose 1~4\n");
    }
  }
}
