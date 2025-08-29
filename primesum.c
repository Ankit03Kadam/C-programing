#include<stdio.h>

void prime(){
    int count1=3;
    int jump=0;
    for(int i=1;i<=100;i++)
    {
        int prime=1;
        
       for(int j=1;j<=i;j++)
      {
            if(i%j==0){
                prime=0;
		jump++;
		break;
            }
            
        }
        
       
        if(prime==0){
            if(count1==3)
		{
               printf("%d\n",i);
                count1=0;
            }
                

            count1++;
        }
    }
}

int main(){
    prime();
    
}