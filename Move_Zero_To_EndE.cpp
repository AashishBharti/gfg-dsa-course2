#include<bits/stdc++.h>
using namespace std;

void movetozero(int arr[],int n)
{
    // int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }

    // 

}

int main()
{   

    int arr[]={1,9,8,4,0,0,2,7,0,6,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    movetozero(arr,n);
    

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    





    
    // movetozero(arr);

}