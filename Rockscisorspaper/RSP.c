#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void RSP(void)
{
printf("Choose your Number\n");

int Player1;
int Player2;
srand(time(0));
Player2=(rand() % 3);

printf("Choose Only Player1\n");
printf("0.scisor 1.rock 2.paper :  ");
scanf("%d", &Player1);

while(1){
 if(Player1<0 || Player1>2 )
 {
   printf("out of Range, choose 0~2. :");
   scanf("%d", &Player1);
 }
 else
 {
  break;
 }
}


if(Player1==0)
  {
    printf("Player1 is scisor\n");
  }
else
 {
  if(Player1==1)
  {
   printf("Player1 is rock\n");
  }
  else
  {
   printf("Player1 is paper\n");
  }
 }


if(Player2==0)
{printf("Player2 is scisor\n");
}
else
{
if(Player2==1)
{
printf("Player2 is rock\n");
}
else
{
printf("Player2 is paper\n");
}
}


if(Player1==Player2)
{
 printf("Same Score!!\n");
}
else if((Player1+1)%3 == Player2)
{
 printf("Player1 loses, Player2 wins\n");
}
else
{
 printf("Player1 wins, Player2 loses\n");
}
}
