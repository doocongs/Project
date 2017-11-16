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
