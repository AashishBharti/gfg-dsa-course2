#include<bits/stdc++.h>

using namespace std;

void MaxDiff(int arr[],int n)
{
    int res=arr[0]-arr[1];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res=max(res,arr[j]-arr[i]);
        }
    }
    cout<<res;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;

    MaxDiff(arr, n);

}