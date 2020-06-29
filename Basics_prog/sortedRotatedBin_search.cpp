//Binary Search in a sorted rotated array
//pivot element is the only element for which next element to it is smaller than it
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k,i;
    int x,s,e;
    cout<<"Enter size of array:\n";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to be searched\n";
    cin>>k;
    i=0;
    while(a[i]<a[i+1])//To find pivot element
        i++;
    x=i;//saving index of pivot element
    if(k==a[x])
    {
        cout<<"Index of search element is "<<x;
        return 0;
    }
    if(k==a[0])
    {
        cout<<"Index of search element is 0";
        return 0;
    }
    else if(k<a[0])
    {
        s=x+1;
        e=n-1;
    }
    else
    {
        s=0;
        e=x-1;
    }
    while(s<=e)
    {
        x=(s+e)/2;
        if(a[x]==k)
        {
            cout<<"Index of search element is "<<x;
            return 0;
        }
        else if(k<a[x])
            e=x-1;
        else
            s=x+1;
    }
    cout<<"Search element not found";
    return 0;
}