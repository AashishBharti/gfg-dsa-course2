#include<bits/stdc++.h>

using namespace std;

bool isequil(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int ls=0,rs=0;
        for(int j=0;j<i;j++)
        {
            ls+=arr[j];
        }
        for(int k=i+1;k<n;k++)
        {
            rs+=arr[k];
        }
        if(ls==rs)
        {
            return true;
        }

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