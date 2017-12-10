#include <stdio.h>

void B31(){
  int player;
  int player_sum = 0;
  int num;
  int sum = 0;
  printf("How many players?\n");
  scanf("%d",&player);

  while(1){
    //system("clear");
    player_sum++;
    if(player_sum > player){
      player_sum = 1;
    }
    printf("Player %d!! Enter your number 1~3\n",player_sum);
    scanf("%d",&num);
    system("clear");
    if(num > 4){
      printf("Enter only 1~3!!!\n");
      player_sum--;
      num = 0;
    }   
    sum = sum + num;
    printf(" _____________________________________________________________\n");
    printf("|                                                             |\n");
    printf("|");
    for(int i = 0; i<sum; i++){
      printf("##");
    }
    printf("\n");
    printf("|_____________________________________________________________|\n");
    printf("Now ~~:%d!!\n",sum);
    if( sum >= 31 ){
      printf("Player%d is winner!!\n",player_sum);
      break;
    }
  }
}
