#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#include <termio.h>
#include "getch.h"

volatile char P2;

/*int getch(void)
{
    int ch; 

     struct termios old;
   struct termios new;
       tcgetattr(0, &old);
    new = old;
       new.c_lflag &= ~(ICANON|ECHO);
	    new.c_cc[VMIN] = 1;
        new.c_cc[VTIME] = 0;

	    tcsetattr(0, TCSAFLUSH, &new);
        ch = getchar();
	    tcsetattr(0, TCSAFLUSH, &old);
	        return ch;
}*/

/*
#define Max 100
struct Student
{
  char Name[32];
};

struct Student StudentList[Max];
*/
void *myfuncs(void *arg)
{
  P2=getch();
  pthread_exit(NULL);
}

int Roulette(){


  srand(time(0));
  int PeopleNum;
  int Rnum;
  int RandNum;
  printf("How many people play??..\n");
  scanf("%d", &PeopleNum);
  /*
  for(int i=0;i<PeopleNum;i++)
  {
    printf("Insert your Name\n");
    scanf("%s", StudentList[i].Name);  }*/

  RandNum=rand()%6 +1;
  
 // printf("%d is The Dead  Number\n", RandNum);

  int LastValue =RandNum;

  int k=0;
  char N;
  int tmp = 0;
  pthread_t mythread;
  pthread_create(&mythread, NULL, myfuncs, NULL);
  for(int i=0 ;i <200; i++)
  {
    
    system("clear");
    tmp++;
    if(tmp == 2) tmp = 0;
    printf("%d is The Dead Number\n", LastValue);
    RandNum = rand()%6 +1 ;
    printf("player %d's turn, Press 'N'BUTTON\n",PeopleNum);
      if(tmp == 1){
        printf("     ________      \n");
        printf("    /|      /|  \n");
        printf("   /  | ?  /  |  \n");
        printf("  / ?  |__/ ?  |  \n");
        printf("  |----|__|----|    \n");
        printf("  | ?  /  | ?  /   \n");
        printf("   |  / ?  |  /    \n");
        printf("    |/______|/    \n");  
      }
      else if(tmp==0){
        printf("         _       \n");
        printf("      __/||__      \n");   
        printf("    _/   |   |_     \n");
        printf("   /|_ ? | ? _/|     \n");
        printf("   |  |__|__/  |     \n");
        printf("   | ? _|_|_ ? |    \n");   
        printf("   | _/  |  |_ |   \n");   
        printf("   |/  ? | ?  |/   \n");   
        printf("     |__ | __/      \n");  
	printf("        ||/      \n");
    }
  }
  //  if(P2 == 'n'){
    //  break;
      system("clear");
      printf("     ________      \n");
      printf("    /        |  \n");
      printf("   /          |  \n");
      printf("  /            |  \n");
      printf("  |     %d     |    \n",RandNum);
      printf("  |           /   \n");
      printf("   |         /    \n");
      printf("    |_______/    \n");
   
    /*  if(RandNum==LastValue)
      {
        printf("<<< %d >>> You dead....\n", RandNum);
        printf("GAME OVER");
        return 0;
      }
      else{
        printf("<<< %d >>> ALive....\n",RandNum);
        k++;
        if(k == PeopleNum)
        {
          k=0;
        }
//	sleep(10);
//	break;
      }

    }
//    while(1){
  //    scanf("%c", &N);
     // if(N  == 'N'){
    //    break;
    //  }
   // }
  
  }
  pthread_join(mythread,NULL);
*/}
