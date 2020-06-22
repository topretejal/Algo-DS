//2nd highest marks
#include<iostream>
#include<stdio.h>
using namespace std;
int find_second_max(int arr[],int nos);//nos is No. of students
int main()
{
    int nos,marks[100],i;
    cout<<"Enter no. of students:\n";
    cin>>nos;
    cout<<"enter marks of students\n";
    for(i=0;i<nos;i++)
    {
        cin>>marks[i];
    }
    cout<<"Second highest marks is "<<find_second_max(marks,nos);
    return 0;
}
int find_second_max(int arr[],int nos)
{
    int t,max1,max2,i;
    max1=arr[0];
    max2=arr[1];
    if(max1<max2)
    {
        t=max1;
        max1=max2;
        max2=t;
    }
    for(i=1;i<nos;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i]&&max1!=arr[i])
        {
            max2=arr[i];
        }
    }
    return max2;
}