//Segregating 0s and 1s
#include<iostream>
#include<stdio.h>
using namespace std;
void segregate0and1(int arr[],int n)
{
    int left=0,right=n-1;
    while(left<right)
    {
        if(arr[left]==0)
            left++;
        else if(arr[right]==1)
            right--;
        else
        {
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
    }
    return;
}
int main()
{
    int arr[100],n,i;
    cout<<"Enter array size\n";
    cin>>n;
    cout<<"Enter array elements as 0 or 1\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    segregate0and1(arr,n);
    cout<<"Segregated array is as follows:\n";
    for(i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}