#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
  char c[100];
  int a,b;
  printf("How many people are you going to play?\n");
  scanf("%d",&a);
  printf("How many 'Bomb' you needs?\n");
  scanf("%d",&b);
  
  for( int i = 0 ; i < a; i++){
    c[i] = 0; // 0 is pass 1 is fail
  }

  for( int i = 0 ; i < b; i++){
    c[i] = 1;
  }
  
  
}

void shuffle(int aa, char *bb)
{
  srand((unsigned int)time(NULL));
  
  char e,f;
  char d[100];
  for(int i = 0; i < aa; i++){
    d[i] = rand() % aa  + 1;
	
    for(int j = 0; j < i; j++){
      if( d[i] == d[j] ){
        i--;
	break;
      }
    }
  }
  
  
  for(int i = 0; i < aa; i++){
     
  } 
 
}
