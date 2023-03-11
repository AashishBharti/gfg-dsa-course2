#include<bits/stdc++.h>

using namespace std;

int max_flip(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"from"<<i<<"to";
            }
            else
            {
                cout<<i-1<<endl;
            }
        }
    }
    if(arr[n-1]!=arr[0])
    {
        cout<<n-1;
    }
}

int main()
{
    int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0}, n = 9;

     max_flip(arr, n);
}