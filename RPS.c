#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
srand(time(0));
char RPS[3][10]={"rock","scissor","paper"};
int input,GO=1;
int IC=0,CC=0,GC=0;

do{
   printf("Enter 1 for rock\nEnter 2 for Scissor\nEnter 3 for Paper\n");
   scanf("%d",&input);
    if(input<=0 || input>=4)
{
printf("Invalid Choice!!!!\n");
continue;
}
    int com=(rand()%(2-0+1)+0);
    printf("Your Choice: %s\n",RPS[input-1]);
    printf("Computer Choice: %s\n",RPS[com]);
    if(input-1==com)
    {
	printf("Game Draw\n");
    }
    else{
		if(input-1==0)
		{
			if(com==1)
			{
			 printf(" You Won!!, Rock Blunts Scissors\n");
			IC++;
			}
			else
			{
			 printf("Computer Won!!, Paper Covers Rock\n");
			CC++;
			}
		}
		else{
			if(input-1==1){
				if(com==2)
				{
				 printf(" You Won!!,  Scissors cuts Paper\n");
				IC++;
				}
			       else
				{
				 printf("Computer Won!!,  Rock Blunts Scissors\n");
				CC++;
				}
			}
			else{
				if(com=0)
					{
					printf(" You Won!!,  Paper Covers Rock\n");
					IC++;
					}
			       else{
				 printf("Computer Won!!,  Scissors cuts Paper\n");
				CC++;
				}
 			}
			
		}
		
	    }
     printf("--------------------------------------------------------\n");
     printf("Computer   : %d \nYou        : %d\nGame Count : %d\n",CC,IC,++GC);
    printf("--------------------------------------------------------\n");
    printf("Press 1 to Continue the game\nPress 0 to Quite the Game\n");
    scanf("%d",&GO);
}while(GO!=0);
return 0;
}