#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
  char data;
  char flag;
}card;

void shuffle(int aa, int bb, card *cc);

void main()
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
  
 // for(int i = 0; i < a; i++){
    printf("Press button in 1 ~ %d\n", a);
   // scanf("%d", &g);
    for(int j = 0; j < a; j++){
        printf("%d :", j+1);
     //   if( c[g-1] == 1) printf("X\n");
       // if( c[g-1] == 0) printf("O\n");
    }
  //} 
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
