//2nd last occurence of a number in an array
#include<iostream>
#include<stdio.h>
using namespace std;
int get_2ndlast_occurence(int arr[],int n_arr,int search_no);
int main()
{
    int arr[100],n_arr,search_no,i;
    cout<<"Enter no. of elements:\n";
    cin>>n_arr;
    cout<<"Enter array elements:\n";
    for(i=0;i<n_arr;i++)
        cin>>arr[i];
    cout<"Enter element to be searched\n";
    cin>>search_no;
    cout<<"Second last occurence of element to be searched is "<<get_2ndlast_occurence(arr,n_arr,search_no);
return 0;
}
int get_2ndlast_occurence(int arr[],int n_arr,int search_no)
{
    int i,l1=-1,l2=-1,flag=0;
    for(i=0;i<n_arr;i++)
    {
        if(arr[i]==search_no)
        {
            l2=l1;
            l1=i;
            flag=1;
        }
    }
    if(flag==1&&l2>=0)
        return l2;
    else
        return -1;
  
}