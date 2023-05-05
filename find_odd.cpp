#include<bits/stdc++.h>

using namespace std;

int odd_num(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count%2!=0)
        {
            return a[i];
        }
    }
}
int main()
{
    int a[]={7,3,7,7,7};
    int n=5;
    cout<<odd_num(a,n);
}