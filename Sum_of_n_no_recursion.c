#include<stdio.h>
int sum(x)
int x;
{
    if(x==0)    
    {
        return 0;
    }
    else
    {
        return (x+sum(x-1));
    }
    
}
int main()
{

    int a,summ;

    printf("Enter Number a : ");
    scanf("%d",&a);
    

    summ=sum(a);

    printf("\nSum = %d",summ);

    return 0;
}
