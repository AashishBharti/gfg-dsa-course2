#include<bits/stdc++.h>

using namespace std;

void moveToend(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
                
            }
        }
    }
   
}

int main()
{
    int arr[]={1,9,8,4,0,0,2,7,0,6,0,9};

    int n=12;
    moveToend(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    

}