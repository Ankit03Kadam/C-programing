#include<stdio.h>
#include<stdlib.h>
int main()
{
int input;
char choice;
do{
printf("  press 'm' for Menu, c for  Contacts, h for Help\n");
scanf("%c",&choice);
switch(choice)
{
case 'm':
		printf("You Entered in Menu Section\n");
		break;
case 'c':
		printf("You Entered in Contacts Section\n");
		break;
case 'h':	      
		printf("You Entered in Help Section\n");
		break;
default:
		printf("Please Entered valid Choice");

}
printf("Enter 1 to continue:");
scanf("%d",&input);
fflush(stdin);
}while(input==1);
return 0;
}