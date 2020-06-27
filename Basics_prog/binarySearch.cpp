//Binary Search
#include<iostream>
#include<stdio.h>
using namespace std;
void binary_search(int arr[],int search,int n);
int main()
{
    int n,i,arr[50],search;
    cout<<"Enter array size:\n";
    cin>>n;
    cout<<"Enter array elements\n";
    for (i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched";
    cin>>search;
    binary_search(arr,search,n);
}
void binary_search(int arr[],int search,int n)
{
    int s,e,m;
    s=1;//start
    e=n;//middle
    while(s<=e)
    {
        m=(s+e)/2;
        if(search==arr[m])
        {   
            cout<<"Index is "<<m+1;
            return ;
        }
        if(search<arr[m])
            e=m-1;
        else
            s=m+1; 
    }
    cout<<"\n Not Found";
    return;
}