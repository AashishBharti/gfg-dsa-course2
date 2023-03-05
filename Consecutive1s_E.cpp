#include<bits/stdc++.h>
using namespace std;

int ConsequtiveOne(int arr[],int n)
{
    int res=0;int count=0;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]==0)
        {
            count=0;
        }
        else
        {
            count++;
            res=max(res,count);
        }
       
    }
    return res;
}
int main()
{
    int arr[]={1,1,1,0,0,1,1,1,1};
    int n=9;
    cout<<ConsequtiveOne(arr,n);


}