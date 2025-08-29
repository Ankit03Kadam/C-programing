#include<stdio.h>
#include<string.h>
int main(){
	int x,r;
	char faltu,m;
	printf("Enter a number:");
	scanf("%d",&x);
	r=120;
	while(r==120)
{
	m=getchar();
	if(m=='\n' || m==EOF)
	{
	break;
	}
}
	printf("Enter a character:");
	scanf("%c",&m);
	r=120;
	while(r==120)
	{
	m=getchar();
	if(m=='\n' || m==EOF)
	{
	break;
	}
} 
 	printf("\n\n");
	printf("Value of x is %d\n",x);
	printf("Number in m is %d\n",m);
        return 0;
}