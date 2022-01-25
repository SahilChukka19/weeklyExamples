//c program for checking whether the entered year is a leap year or not
#include<stdio.h>

int main(){
    
    int y;
    printf("enter a year: ");
    scanf("%d",&y);
    
    if(y%400==0)
    {
        printf("its a leap year");
    }
    else if(y%100==0)
    {
        printf("its not a leap year");
    }
    else if(y%4==0)
    {
        printf("its a leap year");
    }
    else
    {
        printf("its not a leap year");
    }
    return 0;
}