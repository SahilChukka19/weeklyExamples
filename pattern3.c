//Write a program to print below pattern:-
    //*****
    //****
    //***
    //**
    //*
    //**
    //***
    //****
    //*****
#include<stdio.h>
int main()
{
    int i,j;
    for(i=6;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
        printf("*");
        }
    printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}