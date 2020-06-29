//Find 2 numbers in sorted array whose sum is equals to given number
#include<iostream>
#include<stdio.h>
using namespace std;

void print2num(int a[],int n,int s);

int main()
{
    int n,sum,i;
    cout<<"Enter array size:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the sum:\n";
    cin>>sum;

    print2num(arr,n,sum);
    return 0;
}

void print2num(int a[],int n,int s)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==s)
            {
                cout<<"Two numbers are "<<a[i]<<"  and "<<a[j];
                return;
            }
        }
    }

    cout<<"No such pair of numbers exists";
    return;
}