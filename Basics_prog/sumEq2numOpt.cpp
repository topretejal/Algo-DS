//Given a sorted array and a sum (say s), find two elements in the array whose sum is s. Solve it in the most efficient way.
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
//given sorted array
void print2num(int a[],int n,int s)
{
    int l=0,r=n-1;
    while(1)
    {
        if(l>r)
        {
            cout<<"No such pair of numbers found";
            return;
        }
        int lr_sum=a[l]+a[r];
        if(lr_sum==s)
        {
            cout<<"2 Numbers are "<<a[l]<<" and "<<a[r];
            return;
        }
        if(lr_sum>s)
            r--;
        else
            l++;
    }
}