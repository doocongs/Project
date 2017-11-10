#include <stdio.h>

void main()
{
  int a;
  printf("Choose Game!!\n");
  printf("1. BBopgi Game      2. Rock Scissors Paper\n");
  
  while(1){
    scanf("%d",&a);
    if( a == 1){
      //bbopgi();
      break;
    }
    else if( a == 2){
      //RSP();
      break;
    }
    else{
      printf("Please Choose 1~2\n");
    }
  }
}
