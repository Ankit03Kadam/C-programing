#include<stdio.h>
#include<string.h>
struct emp{
int id;
char name[15];
float sal;
};
int main()
{
int s,hs=0,index=0;
printf("Enter Total Number of Employees :");
scanf("%d",&s);
struct emp e[s];
for(int i=0;i<s;i++)
{
 printf("Enter %d employee Id :",i+1);
 scanf("%d",&e[i].id);
 fflush(stdin);
 printf("Enter %d employee Name :",i+1);
 gets(e[i].name);
 fflush(stdin);
 printf("Enter %d employee Salary :",i+1);
 scanf("%f",&e[i].sal);
}
printf("Employes Details:\n");
for(int i=0;i<s;i++)
{
printf("%s Employee has Id:%d and Salary : %.2f\n",e[i].name,e[i].id,e[i].sal);
if(hs<e[i].sal)
{
 hs=e[i].sal;
 index=i;
}
}
printf("\nEmployee Id: %d\nEmployee %s has Highest Salary i.e. %.2f\n",e[index].id,e[index].name,e[index].sal);
int input;
printf("Want to Arrange the Employe list According to Salary? --press 1 for YES and 0 for NO--\n");
scanf("%d",&input);
if(input==1){
int arng[s];
for(int i=0;i<s;i++)
{
 arng[i]=e[i].sal;
}
 for(int i=1;i<s;i++)
   {
        struct emp dimaag;
         dimaag.id=e[i].id;
         strcpy(dimaag.name,e[i].name);
         dimaag.sal=e[i].sal;
        int z=i-1;
        while(z>=0 && dimaag.sal<e[z].sal)
       {
           e[z+1].id=e[z].id;
           strcpy(e[z+1].name,e[z].name);
           e[z+1].sal=e[z].sal;
           z--;
        }
        e[z+1].id=dimaag.id;
	strcpy(e[z+1].name,dimaag.name);
	e[z+	1].sal=dimaag.sal;	
    }

if(input==1)
{
 printf("Press 1 for Arrange in Ascending Order and 0 for Arrange in Descending Order");
 scanf("%d",&input);
 if(input==1)
 {
  for(int i=0;i<s;i++)
  {
   printf("%s Employee has Id:%d and Salary : %.2f\n",e[i].name,e[i].id,e[i].sal);
  }
 }
 else
 {
  for(int i=s-1;i>=0;i--)
  {
   printf("%s Employee has Id:%d and Salary : %.2f\n",e[i].name,e[i].id,e[i].sal);
  }
 }
}
}
return 0;
}