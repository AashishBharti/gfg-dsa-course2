#include<bits/stdc++.h>

using namespace std;

void RotateOne(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void RotateDtime(int arr[],int n,int d)
{
    for(int i=0;i<d;i++)
    {
        RotateOne(arr,n);
    }
}

int main()
{
     int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       RotateDtime(arr, n, d);

       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}