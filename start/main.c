#include <stdio.h>
#include <stdlib.h>

#include "getch.h"
#include "RSP.h"
#include "bbopgi.h"
#include "B31.h"
#include "Roulette.h"

void main()
{
  system("clear");
  printf("\n\n\n");  
  printf("                        	Choose Game!!   w    s\n				Enter is o\n\n\n");  
  printf("                        	1. BBopgi Game              << \n");
  printf("                        	2. Rock Scissors Paper\n");
  printf("                        	3. BR 31\n");
  printf("				4. Roulette\n");

  int cnt = 1;
  while(1){
    char a;
 
    a = getch();
    system("clear");
    if( a == 'w'){
      cnt--;
      if(cnt == 0){
        cnt = 4;
      }
    }
    else if( a == 's'){
      cnt++;
      if(cnt == 5){
        cnt = 1;
      }
    }
    else if( a == 'o'){
      if( cnt == 1 ){
        bbopgi();
        break;
      }
      else if( cnt == 2){
        RSP();
        break;
      }
      else if( cnt == 3){
        B31();
        break;
      }
      else if( cnt == 4){
        Roulette();
        break;
      }
    }
    printf("\n\n\n");
    printf("				Choose Game!!   w    s\n				Enter is o\n\n\n");
    
    if( cnt == 1){     
      printf("				1. BBopgi Game              << \n");
      printf("				2. Rock Scissors Paper\n");
      printf("				3. BR 31\n");
      printf("				4. Roulette\n");
    }
    else if( cnt == 2){
      printf("				1. BBopgi Game    \n");
      printf("				2. Rock Scissors Paper      <<\n");
      printf("				3. BR 31\n");
      printf("				4. Roulette\n");
    }
    else if( cnt == 3){
      printf("				1. BBopgi Game     \n");
      printf("				2. Rock Scissors Paper\n");
      printf("				3. BR 31                    <<\n");
      printf("				4. Roulette\n");
    }
    else if( cnt ==4){
      printf("				1. BBopgi Game   \n");
      printf("				2. Rock Scissors Paper\n");
      printf("				3. BR 31\n");
      printf("				4. Roulette                 <<\n");
    }
  } 
}
