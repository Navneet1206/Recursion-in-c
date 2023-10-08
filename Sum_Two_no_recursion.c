#include<stdio.h>
int sum(x ,y)
int x,y;
{
    if(x==0)    
    {
        return y;
    }
    else
    {
        if(y==0)
        {
            return x;
        }
        else
        return (sum(x-1,y+1));
    }
    
}
int main()
{

    int a,b,summ;

    printf("Enter Number a : ");
    scanf("%d",&a);
    printf("Enter Number b : ");
    scanf("%d",&b);

    summ=sum(a , b);

    printf("\nSum = %d",summ);

    return 0;
}
