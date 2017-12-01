#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct Student
{
  char Name[32];
}

struct Student StudentList[Max];


void Roulette(){


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
  
  
  while(1){
  
  
  
  }
 // ... code... 
  if()
  else if()
  else




}
