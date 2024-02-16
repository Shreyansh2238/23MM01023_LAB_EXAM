#include<stdio.h>

int main(){
    int num,i,num1,num2,j,k,c=0,p=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=4;i<=num/2;i++)
    { 
        c=0;
        for(j=2;j<i;j++)
        { 
            
            if(i%j==0)
            {
                c++;
            }  
        }
        p=0;
        for(k=2;k<(num-i);k++)
        {
            
            if((num-i)%k==0)
            {
                p++;
            }  
        }
        if(c!=0 && p!=0 && i!=(num-i))
        {
            printf(" %d %d \n",i,num-i);
        }
    }
    
        
    return 0;
}