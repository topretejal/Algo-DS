//Printing Base 2 equivalent
#include<iostream>
#include<stdio.h>
using namespace std;
void print_base_neg_2(int no);
int main(){
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    print_base_neg_2(no);
    return 0;
}
void print_base_neg_2(int no){
    int j,i=0;
    int arr[100];
    while(no!=1)
     {
        arr[i]=no%2;
        no=no/2;
        i++;
    }
    
    arr[i]=1;
    cout<<"\nBinary of given no. is";
    for(j=i;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}