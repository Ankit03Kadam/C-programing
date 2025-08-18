#include <stdio.h>
int main()
{
int num,reverse=0,neg=0;
printf("Enter a Number:");
scanf("%d",&num);

while(num!=0)
{
reverse=(reverse*10)+num%10;
num=num/10;

}


printf("The Reverse Number is %d",reverse);
return 0;
}