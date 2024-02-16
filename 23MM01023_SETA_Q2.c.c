#include<stdio.h>

int main(){
    int a,b,i,j,sum=0;
    printf("Input lower limit: ");
    scanf("%d",&a);
    printf("Input upper limit: ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        
        if(sum==i)
        {
            printf("%d is a perfect number.\n",i);
        }
    }
    
    return 0;
    
}