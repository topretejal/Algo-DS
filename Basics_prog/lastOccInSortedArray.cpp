//last occurence in sorted array O(logn) complexity
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,n,search;
    int s,e,m,flag=0;
    cout<<"Enter size of array:\n";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:\n";
    for (i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter num to be searched:\n";
    cin>>search;

    s=0;
    e=n;
    while(s<=e)
    {
        m=(s+e)/2;
        if(a[m]==search)
        {
            
            s=m+1;
            flag++;
        }
        else if(a[m]<search)
            s=m+1;
        else
            e=m-1;
    }
    // if(flag==1)
    //     cout<<"Last occurence is at "<<m;
     if(flag>=1)
        cout<<"Last occurence is at "<<m;
    else
        cout<<"No Occurence";
return 0;
    
}