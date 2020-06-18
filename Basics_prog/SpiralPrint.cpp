//Spirally prints matrix
#include <iostream>
#include<stdio.h>
using namespace std;
int a[10][10];
int spiral_print(int r,int c);
int main()
{ int i,j,r,c;
  cout<<"Enter number of rows and columns\n";
  cin>>r>>c;
  for(i=0;i<r;i++) //ARRAY elements
  {
      for(j=0;j<c;j++)
      {
          cin>>a[i][j];
      }
  }
  spiral_print(r,c);
  return 0;
}
int spiral_print(int r, int c)
{
int rs=0,cs=0,i;
int re=r-1;
int ce=c-1;
while(rs<re&&cs<ce)
{
    for(i=rs;i<=ce;i++)
        printf("%d ",a[rs][i]);//traversing top row
    rs++;// top row traversed
    for(i=rs;i<=re;i++)
        printf("%d ",a[i][ce]);//traversing right column
    ce--;// rightmost column traced
    for(i=ce;i>=cs;i--)
        printf("%d ",a[re][i]);//traversing bottom row
    re--;//bottom row traced
    for(i=re;i>=rs;i--)
        printf("%d ",a[i][cs]);//traversing left column
    cs++;
}
if(rs==re)//only one row remaining
{
    for(i=cs;i<=ce;i++)
        printf("%d ",a[rs][i]);
}
else//only one column remaining
{
    for(i=rs;i<=re;i++)
    {
        printf("%d ",a[i][cs]);
    }
}
return 0;
}