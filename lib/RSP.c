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

*/



#include<stdio.h>
      2 #include<stdlib.h>
            3 #include<time.h>
	          4 #include "RSP.h"
		        5 #include <pthread.h>
			      6 #include <termio.h>
			            7 #include "getch.h"
				          8 
					        9 volatile char P1;
						     10 int getch(void)
						          11 {
							       12     int ch;
							            13 
								         14     struct termios old;
									      15     struct termios new;
									           16 
										        17     tcgetattr(0, &old);
											     18     new = old;
											          19     new.c_lflag &= ~(ICANON|ECHO);
												       20     new.c_cc[VMIN] = 1;
												            21     new.c_cc[VTIME] = 0;
													         22 
														      23     tcsetattr(0, TCSAFLUSH, &new);
														           24     ch = getchar();
															        25     tcsetattr(0, TCSAFLUSH, &old);
																     26     return ch;
																     #include<stdio.h>
																           2 #include<stdlib.h>
																	         3 #include<time.h>
																		       4 #include "RSP.h"
																		             5 #include <pthread.h>
																			           6 #include <termio.h>
																				         7 #include "getch.h"
																					       8 
																					             9 volatile char P1;
																						          10 int getch(void)
																							       11 {
																							            12     int ch;
																								         13 
																									      14     struct termios old;
																									           15     struct termios new;
																										        16 
																											     17     tcgetattr(0, &old);
																											          18     new = old;
																												       19     new.c_lflag &= ~(ICANON|ECHO);
																												            20     new.c_cc[VMIN] = 1;
																													         21     new.c_cc[VTIME] = 0;
																														      22 
																														           23     tcsetattr(0, TCSAFLUSH, &new);
																															        24     ch = getchar();
																																     25     tcsetattr(0, TCSAFLUSH, &old);
																																          26     return ch;
																																	  #include<stdio.h>
																																	        2 #include<stdlib.h>
																																		      3 #include<time.h>
																																		            4 #include "RSP.h"
																																			          5 #include <pthread.h>
																																				        6 #include <termio.h>
																																					      7 #include "getch.h"
																																					            8 
																																						          9 volatile char P1;
																																							       10 int getch(void)
																																							            11 {
																																								         12     int ch;
																																									      13 
																																									           14     struct termios old;
																																										        15     struct termios new;
																																											     16 
																																											          17     tcgetattr(0, &old);
																																												       18     new = old;
																																												            19     new.c_lflag &= ~(ICANON|ECHO);
																																													         20     new.c_cc[VMIN] = 1;
																																														      21     new.c_cc[VTIME] = 0;
																																														           22 
																																															        23     tcsetattr(0, TCSAFLUSH, &new);
																																																     24     ch = getchar();
																																																          25     tcsetattr(0, TCSAFLUSH, &old);
																																																	       26     return ch;
																																																	       #include<stdio.h>
																																																	             2 #include<stdlib.h>
																																																		           3 #include<time.h>
																																																			         4 #include "RSP.h"
																																																				       5 #include <pthread.h>
																																																				             6 #include <termio.h>
																																																					           7 #include "getch.h"
																																																						         8 
																																																							       9 volatile char P1;
																																																							            10 int getch(void)
																																																								         11 {
																																																									      12     int ch;
																																																									           13 
																																																										        14     struct termios old;
																																																											     15     struct termios new;
																																																											          16 
																																																												       17     tcgetattr(0, &old);
																																																												            18     new = old;
																																																													         19     new.c_lflag &= ~(ICANON|ECHO);
																																																														      20     new.c_cc[VMIN] = 1;
																																																														           21     new.c_cc[VTIME] = 0;
																																																															        22 
																																																																     23     tcsetattr(0, TCSAFLUSH, &new);
																																																																          24     ch = getchar();
																																																																	       25     tcsetattr(0, TCSAFLUSH, &old);
																																																																	            26     return ch;
																																																																		    #include<stdio.h>
																																																																		          2 #include<stdlib.h>
																																																																			        3 #include<time.h>
																																																																				      4 #include "RSP.h"
																																																																				            5 #include <pthread.h>
																																																																					          6 #include <termio.h>
																																																																						        7 #include "getch.h"
																																																																							      8 
																																																																							            9 volatile char P1;
																																																																								         10 int getch(void)
																																																																									      11 {
																																																																									           12     int ch;
																																																																										        13 
																																																																											     14     struct termios old;
																																																																											          15     struct termios new;
																																																																												       16 
																																																																												            17     tcgetattr(0, &old);
																																																																													         18     new = old;
																																																																														      19     new.c_lflag &= ~(ICANON|ECHO);
																																																																														           20     new.c_cc[VMIN] = 1;
																																																																															        21     new.c_cc[VTIME] = 0;
																																																																																     22 
																																																																																          23     tcsetattr(0, TCSAFLUSH, &new);
																																																																																	       24     ch = getchar();
																																																																																	            25     tcsetattr(0, TCSAFLUSH, &old);
																																																																																		         26     return ch;


/*
