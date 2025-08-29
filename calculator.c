#include<stdio.h>
int main()
{
int n1,n2,ch=1,q=1;
do{
  printf("Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 for Modulo\n");
  scanf("%d",&ch);
  printf("Enter number one:");
  scanf("%d",&n1);
  printf("Enter number one:");
  scanf("%d",&n2);
  switch(ch){
  case 1:
            printf("%d + %d is %d\n",n1,n2,n1+n2);
	   break;
  case 2:
            printf("%d - %d is %d\n",n1,n2,n1-n2);
	   break;
  case 3:
            printf("%d  *  %d is %d\n",n1,n2,n1*n2);
	    break;
  case 4:
            printf("%d / %d is %d\n",n1,n2,n1/n2);
	    break;
  case 5:
            printf("%d modulo %d is %d\n",n1,n2,n1%n2);
	    break;
 default:
            printf("----------Invalid Choice----------");
}
printf("Enter 1 for continue and 0 for Quit\n");
scanf("%d",&q);
}while(q==1);
return 0;
}