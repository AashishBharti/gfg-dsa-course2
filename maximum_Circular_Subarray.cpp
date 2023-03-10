#include<bits/stdc++.h>

using namespace std;

int maxCircular(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum+=arr[index];
            curr_max=max(curr_max,curr_sum);
            res=max(curr_max,res);
        }
        
    }
    return res;
}


int main()
{
    int arr[]={5,-2,3,4};
    int n=4;
    cout<<maxCircular(arr,n);

}