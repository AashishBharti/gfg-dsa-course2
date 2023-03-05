#include<bits/stdc++.h>

using namespace std;


int TrappingRain(int arr[],int n)
{
    int res=0;

    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,arr[j]);
        }
        res+=(min(lmax,rmax))-arr[i];
    }
    return res;
}

int main()
{
    int arr[]={3,0,3,2};
    int n=4;
    cout<<TrappingRain(arr,n);
}