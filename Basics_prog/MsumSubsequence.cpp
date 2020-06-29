//Maximum Sum Subsequence(increasing order)
#include<iostream>
#include<stdio.h>
using namespace std;

int sum_subsequence(int arr[],int n);

int main()
{
    int n,i;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Maximum Sum of Subsequence is "<<sum_subsequence(arr,n);
    return 0;
}

int sum_subsequence(int arr[],int n)
{
    int max=0;
    int i,j,msis[n];
    for(i=0;i<n;i++)//Initializing
        msis[i]=arr[i];
    //computing sums
    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            if((arr[j]<arr[i])&&(msis[i]<msis[j]+arr[i]))
                msis[i]=msis[j]+arr[i];
    //Picking maximum of all msis values
    for(i=0;i<n;i++)
        if(max<msis[i])
            max=msis[i];
    return max;
}