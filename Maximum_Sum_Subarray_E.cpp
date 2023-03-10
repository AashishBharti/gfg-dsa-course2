#include<bits/stdc++.h>

using namespace std;

int maxsum(int arr[],int n)
{
    int maxEnd=arr[0];
    int res=arr[0];

    for(int i=0;i<n;i++)
    {
        maxEnd=max(maxEnd+arr[i],arr[i]);
        res=max(res,maxEnd);
    }
    return res;
}

int main()
{
    
    int arr[]={1,-2,3,-1,2};
    int n=5;
    cout<<maxsum(arr,n);
}