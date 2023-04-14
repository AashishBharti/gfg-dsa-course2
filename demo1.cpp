#include<bits/stdc++.h>
using namespace std;


void patsearching(int arr[],int n)
{
    int i=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
   
}

  

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   patsearching(arr,n);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }

}