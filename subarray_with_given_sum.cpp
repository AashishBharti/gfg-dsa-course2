#include<bits/stdc++.h>
using namespace std;

int sum_subarray(int arr[],int n,int sum)
{
    int curr=0;
    for(int i=0;i<n;i++)
    {
        // if(sum==arr[i])
        // {
        //     return true;
        // }
        for(int j=i+1;j<n;j++)
        {
            curr+=arr[j];
        }
        if(curr==sum)
        {
           cout<<"YES";
        }
         
        
       
        
    }
    // return -1;
}

int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	cout<<sum_subarray(arr, n, sum);
	return 0;
}