#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
const int n=9;
int i,j;
for(i=0;i<(n+1)/2;i++)
{
    cout<<endl;
for(j=0;j<(n+1)/2-i-1;j++)
cout<<(" ");
for(j=0;j<2*i+1;j++)
cout<<("*");
}
for(i=(n-1)/2-1;i>=0;i--)
{
    cout<<endl;
for(j=0;j<=(n)/2-i-1;j++)
cout<<(" ");
for(j=0;j<2*i+1;j++)
cout<<("*");
}
    cout<<endl;
return 0;
}
