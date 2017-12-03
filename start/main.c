#include <stdio.h>
#include"RSP.h"
#include"bbopgi.h"

#include "RSP.h"
#include "bbopgi.h"
#include "B31.h"
#include "Roulette.h"
void main()
{
  int a;
  printf("Choose Game!!\n");
  printf("1. BBopgi Game      2. Rock Scissors Paper\n");
  printf("3. BR 31            4. Roulette;\n");
  

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
      B31();
      break;
    }
    else if( a == 4){
      Roulette();
      break;
    }
    else{
      printf("Please Choose 1~4\n");
    }
  }
}
