#include <stdio.h>

int main() {
    int a,i,sum=0;
    printf("enter a number ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("the sum of all numbers is %d",sum);
    
    return 0;
}