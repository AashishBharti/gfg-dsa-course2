#include<bits/stdc++.h>

using namespace std;

int odd_num(int a[],int n)
{
    int res=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        res=res^a[i];

    }
    return res;
}

int main()
{
    int a[]={7,3,7,7,7};
    int n=5;
    cout<<odd_num(a,n);
}