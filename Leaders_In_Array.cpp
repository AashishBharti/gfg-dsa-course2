#include<bits/stdc++.h>

using namespace std;

void leader(int arr[],int n)
{
    int count=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>=arr[i])
            {
                
                count=arr[j];
                res=max(count,res);
            }
        }
    }
    cout<<res;
}

int main()
{
    int arr[] = {7, 10, 4, 110, 6, 5, 2}, n = 7;

    leader(arr, n);
}