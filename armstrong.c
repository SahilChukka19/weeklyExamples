//Write a program to print Armstrong numbers in the range 1 to 1000.
#include<stdio.h>

int main()
{
    int num, rem, cub, t, sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    t=num;
    
    while(n>0)
    {
        rem = n%10;
        cub = rem*rem*rem;
        sum = sum+cub;
        n = n/10;
    }
    num=t;
    
    if(num==sum)
    {
        printf("The number is an Armstrong number");
    }
    else
        printf("The number is not an Armstrong number");
    
    return 0;
    
}
