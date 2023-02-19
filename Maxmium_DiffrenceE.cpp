#include<bits/stdc++.h>

using namespace std;


void MaxDiffE(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int minval=arr[0];

    for(int i=0;i<n;i++)
    {
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }

    cout<<res;
}

int main()
{

    int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;

    MaxDiffE(arr, n);

}