#include<bits/stdc++.h>

using namespace std;

int TrappingRain(int arr[],int n)
{
    int res=0;
    int lmax[n],rmax[n];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],rmax[i+1]);
    }

    for(int i=0;i<n-1;i++)
    {
        res+=(min(lmax[i],rmax[i]))-arr[i];
    }

    return res;
}

int main()
{
    int arr[]={3,0,3,2};
    int n=4;
    cout<<TrappingRain(arr,n);
}