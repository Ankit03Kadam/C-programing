#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int p1,p2,random,turn=1,min=1,max=20;
srand(time(0));
do{
if(turn==1)
{
printf("player %d,please  Enter %d ",turn,turn);
scanf("%d",&turn);
turn=2;
p1=p1+(rand()%(max-min+1)+min);
}
else{
printf("player %d,please  Enter %d ",turn,turn);
scanf("%d",&turn);
p2=p2+(rand()%(max-min+1)+min);
turn=1;
}
}while(p1<50 || p2<50);
if(p1==p2)
{
  printf("Game Tied!!");
}
else 
{
  if(p1<p2)
  {
  printf("Player 1 Won!!");
  }
  else
   { 
    printf("Player 2 Won!!");
   }
}
return 0;
}
