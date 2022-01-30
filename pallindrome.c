//Write a program to check the entered string is palindrome or not
#include<stdio.h>
#include<stdbool.h> 
int main()
{
    char str;
    int len;
    bool pal = False;
    
    printf("Enter a string: ");
    scanf("%d%,&str);
    
    len = strlen(str);
    
    for(i=0;i<len;i++)
    {
        if(str[i]!= str[len-i-1])
        {
            pal = True;
        }
        break;
    }
    if(pal==True)
    {
        printf("Entered string is a palindrome");
    }
    else
        printf("Entered string is not a palindrome");
    
    return 0;
}