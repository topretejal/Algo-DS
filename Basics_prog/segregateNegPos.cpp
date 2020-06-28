/*{5,9,-7,2,,-3} gives {-7,-3,5,2,9}
{-9,0,1,2,3,-1,-2,-3,44,444} gives {-9,-1,-2,-3,3,0,1,2,44,444}*/
#include<iostream>
#include<stdio.h>
using namespace std;
void partitionArray(int arr[],int n);

int main()
{
    int arr[100];
    int noe,i;
    cout<<"Enter size of array\n";
    cin>>noe;
    cout<<"Enter array elements\n";
    for(i=0;i<noe;i++)
        cin>>arr[i];
    partitionArray(arr,noe);
    cout<<"Segregated array is:\n";
    for(i=0;i<noe;i++)
        cout<<arr[i]<<" ";
    return 0;
}
void partitionArray(int arr[],int n)
{
    int l,r,i,temp;
    r=l=0;
    while(arr[r]<0)
    {
        l++;
        r++;
    }
    while(r<n)
    {
        if(arr[r]>=0)
            r++;
        else
        {
            temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;r++;
        }
    }
    // return ;
}