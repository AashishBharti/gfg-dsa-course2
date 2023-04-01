#include<bits/stdc++.h>

using namespace std;

bool isequil(int arr[],int n)
{
    int rs=0;
    for(int i=0;i<n;i++)
    {
        rs+=arr[i];
    }
    int ls=0;
    for(int i=0;i<n;i++)
    {
        rs-=arr[i];
        if(rs==ls)
        {
            return true;
        }
        ls+=arr[i];
    }
    return false;
}

int main()
{
    int arr[] = {3,4,8,-9,9,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// int sum = 23;
	cout<<isequil(arr, n);
	return 0;
}