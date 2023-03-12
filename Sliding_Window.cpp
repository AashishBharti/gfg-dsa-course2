#include<bits/stdc++.h>

using namespace std;

int maxsum(int arr[],int n,int k)
{
    int res=0;
    for(int i=0;i+k-1<n;i++)
    {
        int curr=0;
        for(int j=0;j<k;k++)
        {
            curr+=arr[i+k];
            
        }
        res=max(res,curr);
    }
    return res;

}

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

     cout<<maxsum(arr, n, k);
}