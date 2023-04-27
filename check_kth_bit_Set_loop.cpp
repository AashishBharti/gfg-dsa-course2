#include<bits/stdc++.h>
using namespace std;


void isset(int n,int k)
{
    
    for(int i=0;i<(k-1);i++)
    {
        n=n/2;
    }
    if((n&1)!=0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
int main()
{
    int n=5;
    int k=3;
    isset(n,k);
}