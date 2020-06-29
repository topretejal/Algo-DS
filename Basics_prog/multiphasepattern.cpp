//multi phase pattern
//Changing corresponding  'i'th row and 'j'th column to 0 if arr[i][j] is 0
#include<iostream>
#include<stdio.h>
using namespace std;

#define r 3
#define c 4
void changeCell(int a[r][c])
{
    int i,j;
    int row[r],col[c];
    int k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
            row[k]=i;
            col[k]=j;
            k++;
            }
        }
    }
    int x=k;
    int t;
    for(k=0;k<x;k++)
    {
    t=row[k];
    for(j=0;j<c;j++)
        a[t][j]=0;
    // }
    // for(k=0;k<x;k++)
    // {
    t=col[k];
    for(i=0;i<r;i++)
        a[i][t]=0;
    }  
}
void displayArray(int a[r][c])
{
int i,j;
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
        cout<<a[i][j]<<" ";
    cout<<"\n";
}
}
int main()
{
    int i,j;
    int arr[r][c];
    cout<<"Enter array elements:\n";
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin>>arr[i][j];
    }
    
    //Changing cells
    changeCell(arr);
    //Displaying changed array
    displayArray(arr);
    return 0;
}