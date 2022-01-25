//program to check whether the number entered by user is a prime or not
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a, i;
    bool c=true;
    
    printf("enter a number ");
    scanf("%d",&a);
    
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            c=true;
        }
        
    }
    
    if(c=true)
    {
        printf("Is a prime number");
    }
    else
    {
        printf("its a composite number");
    }
    return 0;
}
