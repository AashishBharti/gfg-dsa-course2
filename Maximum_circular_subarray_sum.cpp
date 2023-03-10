#include<bits/stdc++.h>

using namespace std;

int max_normal(int arr[],int n)
{
    int res=arr[0];
    int max_ending=arr[0];
    for(int i=1;i<n;i++)
    {
        max_ending=max(max_ending+arr[i],arr[i]);
        res=max(res,max_ending);
    }
    return res;
}

int circular_max(int arr[],int n)
{
    int maxi=max_normal(arr,n);

    if(maxi<0)
    {
        return maxi;
    }

    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
           
     }
     int maxi_circular=arr_sum+max_normal(arr,n);
     int res=max(maxi_circular,maxi);
}


int main()
{
     int arr[] = {8, -4, 3, -5, 4}, n = 5;

     cout<<circular_max(arr, n);
}