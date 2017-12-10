#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "RSP.h"
#include <pthread.h>
#include <termio.h>
#include "getch.h"

volatile char P1;
int getch(void)
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
}


void *myfunc(void *arg)
{
 P1=getch();
 pthread_exit(NULL);
}
 
void RSP()
{
 srand(time(0));
 int cumputer=rand()%3+1;

 if(cumputer==1)
 {
 
 printf("             _ _ _ _\n");
 printf("           _| | | | |\n");
 printf("computer: | |       |\n");
 printf("           -________|\n");
 }
 else if(cumputer==2)
 {
 printf("             _ _ \n");
 printf("            |_|_| \n");
 printf("            |_|_|_ _ \n");
 printf("           _| | | | |\n");
 printf("computer: | |       |\n");
 printf("           -________|\n");
 }
 else
 {
 printf("             _ _ _ _\n");
 printf("            |_|_|_|_|\n");
 printf("            |_|_|_|_| \n");
 printf("           _| | | | |\n");
 printf("computer: | |       |\n");
 printf("           -________|\n");
 }




 pthread_t mythread, mythread2;
 pthread_create(&mythread,NULL,myfunc, NULL);

 int tmp=0;

while(1){

if( P1 == 'z')
{
	break;
}

tmp++;
if(tmp>3)
{
  tmp=1;
}

system("clear");
if(cumputer==1){
printf("             _ _ _ _\n");
printf("           _| | | | |\n");
printf("computer: | |       |\n");  
printf("           -________|\n");
}
      else if(cumputer==2)
       {
        printf("             _ _ \n"); 
	 printf("            |_|_| \n");
	  printf("            |_|_|_ _ \n"); 
	   printf("           _| | | | |\n");
	    printf("computer: | |       |\n");  
	     printf("           -________|\n");
	      }
	       else
	        {
		 printf("             _ _ _ _\n");
		  printf("            |_|_|_|_|\n");
		   printf("            |_|_|_|_| \n");
		    printf("           _| | | | |\n");
		     printf("computer: | |       |\n");  
printf("           -________|\n");
		       }





if(tmp==1){

printf("             _ _ _ _\n");
printf("           _| | | | |\n");
printf("   user:  | |       |\n");
printf("           -________|\n");

}
else if(tmp==2){
printf("             _ _ \n");
printf("            |_|_| \n");
printf("            |_|_|_ _ \n");
printf("           _| | | | |\n");
printf("   user:  | |       |\n");
printf("           -________|\n");

}

else if(tmp==3)
{
printf("             _ _ _ _\n");
printf("            |_|_|_|_|\n");
printf("            |_|_|_|_| \n");
printf("           _| | | | |\n");
printf("   user:  | |       |\n");
printf("           -________|\n");
}


}
pthread_join(mythread, NULL);

}
