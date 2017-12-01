#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define Max 100
struct Student
{
  char Name[32];
};

struct Student StudentList[Max];


int main(){


  srand(time(0));
  int PeopleNum;
  int Rnum;
  int RandNum;

  printf("How many people play??..\n");
  scanf("%d", &PeopleNum);
  
  for(int i=0;i<PeopleNum;i++)
  {
    printf("Insert your Name\n");
    scanf("%s", StudentList[i].Name);
  }

  printf("Choose Roulette Number...\n");
  scanf("%d",&Rnum );
  RandNum=rand()%(Rnum+1);
  
  printf("%d is The Random Number\n", RandNum);

  int LastValue =RandNum;

  int k=0;
  char N;

  while(1)
  {
    RandNum =rand()% (Rnum +1);
    printf("%s's turn, Press 'N'BUTTON\n",StudentList[k].Name);
    while(1){
    
    scanf("%c", &N);
    if(N=='N'){
    break;
    }
    }

    if(RandNum==LastValue)
    {
    printf("<<< %d >>> You are Lose....\n", RandNum);
    printf("GAME OVER");
    return 0;
    }
    else
    {
    printf("<<< %d >>> ALive....\n",RandNum);
    k++;
    if(k == PeopleNum)
    {
     k=0;
    }
    }
  
  
  
  
  
  }


}
