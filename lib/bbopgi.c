#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "bbopgi.h"

typedef struct
{
  char data;
  char flag;
}card;

void shuffle(int aa, int bb, card *cc);

void bbopgi()
{
  card c[100];
  int a,b,g;
  printf("How many bbopgi card  you need to play?\n");
  scanf("%d",&a);
  printf("How many 'Bomb' you needs?\n");
  scanf("%d",&b);
 
  for( int i = 0 ; i < a; i++){
    c[i].data = 0; // 0 is pass 1 is fail
    c[i].flag = 0;
  }

  for( int i = 0 ; i < b; i++){
    c[i].data = 1;
  }
  shuffle(a,b,c);
  printf("===============================\n");
    for(int j = 0; j < a; j++){
      printf(" ___\n");
      printf("|   |\n");
      printf("| %d |\n",j+1);
      printf("|___|\n");
    }
    printf("===============================\n");

    
  for(int i = 0; i < a; i++){
    printf("Press button in 1 ~ %d\n", a);
    scanf("%d", &g);
    system("clear");
    if( g > a ){
      printf("please press under %d\n",a);
      i--;
      continue;
    }
    if( c[g-1].flag == 1){
      printf("You already choose this number!!\n");
      i--;
      continue;
    }
    printf("===============================\n");
    for(int j = 0; j < a; j++){
      
      c[g-1].flag = 1;
      printf(" ___\n");
      printf("|   |\n");
      if( (c[j].flag == 1) && c[j].data == 1){
        printf("| X |\n");
      }
      else if( (c[j].flag == 1) && c[j].data == 0){
        printf("| O |\n");
      }
      else printf("| %d |\n",j+1);
      printf("|___|\n");
    }
    printf("===============================\n");
  } 
}

void shuffle(int aa, int bb, card *cc)
{
  srand((unsigned int)time(NULL));
  
  char e,f;
  char d[100];
  for(int i = 0; i < bb; i++){
    d[i] = rand() % aa  + 1;
	
    for(int j = 0; j < i; j++){
      if( d[i] == d[j] ){
        i--;
	break;
      }
    }
  }
  
  
  for(int i = 0; i < bb; i++){
    e = d[i];
    f = cc[e].data;
    cc[e].data = cc[i].data;
    cc[i].data = f;
  } 
}
