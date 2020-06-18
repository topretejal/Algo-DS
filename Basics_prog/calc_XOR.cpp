//Calculate XOR from 1 to n
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long computeXOR(const int n)
{
    //Modulus operators are expensive
    switch(n & 3)//equivalent to n%4
    {
        case 0:return n;//if n is multiple of 4
        case 1:return 1;//if n%4 gives remainder 1
        case 2:return n+1;//if n%4 gives remainder 2
        case 3:return 0;//if n%4 gives remainder 3
    }
}
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    cout<<computeXOR(n);
    return 0;
}
