//Write a program to check the entered string is palindrome or not
#include<stdio.h>
#include<stdbool.h> 
#include<string.h>
int main()
{
    char str[50];
    int len, i;
    bool pal = false;
    
    printf("Enter a string: ");
    scanf("%c",&str);
    
    len = strlen(str);
    
    for(i=0;i<len;i++)
    {
        if(str[i]!= str[len-i-1])
        {
            pal = true;
        }
        break;
    }
    if(pal==true)
    {
        printf("Entered string is a palindrome");
    }
    else
        printf("Entered string is not a palindrome");
    
    return 0;
}