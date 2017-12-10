#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "RSP.h"
#include <pthread.h>
#include <termio.h>
#include "getch.h"

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
 char P1;
 P1=getch();
 pthread_exit(NULL);
}

void main()
{
 pthread_t mythread;
 pthread_create(&mythread,NULL,myfunc, NULL);

 char P1;
 char P2;

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

if(tmp==1){
system("clear");
printf("   _ _ _ _\n");
printf(" _| | | | |\n");
printf("| |       |\n");
printf(" -________|\n");

}
else if(tmp==2){
system("clear");
printf("   _ _ \n");
printf("  |_|_| \n");
printf("  |_|_|_ _ \n");
printf(" _| | | | |\n");
printf("| |       |\n");
printf(" -________|\n");

}

else if(tmp==3)
{
system("clear");
printf("   _ _ _ _\n");
printf("  |_|_|_|_|\n");
printf("  |_|_|_|_| \n");
printf(" _| | | | |\n");
printf("| |       |\n");
printf(" -________|\n");
}


}

}
