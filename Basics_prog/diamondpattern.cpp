//diamond pattern
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter value on n:\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
         for(j=0;j<=2*i-1;j++)
        {
             printf("*");
         }
     printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=2*i-1;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}