#include<bits/stdc++.h>
using namespace std;    


int maxLength(int arr[],int n)
{
    int res=1,count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i-1]%2!=0 ||
            arr[i]%2!=0 && arr[i-1]%2==0)
            {
                count++;
            }
        else
        {
            count=1;
        }
        res=max(res,count);
    }
    return res;
}

int main()
{
    int arr[]={5,10,20,6,3,8};
    int n=6;
    cout<<maxLength(arr,n);
}