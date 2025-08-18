#include<stdio.h>
int main()
{
int n,prime=0;
printf("Entere a Number to check it is prime or Not :");
scanf("%d",&n);
if(n==0 || n==1)
 {
  printf("The given  %d Number is not prime Number\n",n);
 }
else
{
       for(int i=2;i<n;i++)
	{
	  if(n%i==0)
	 {
		prime=1;
		break;
          }
 }
	if(prime==1)
		printf("The given  %d Number is NOT prime Number\n",n);
	else
		printf("The given  %d Number is prime Number\n",n);
}
return 0;
}