#include<bits/stdc++.h>

using namespace std;

int subarray(int arr[],int n,int sum)
{
    int curr=0;
    int s=0;
    for(int e=0;e<n;e++)
    {
        curr+=arr[e];
        while(curr>sum)
        {
            curr-=arr[s];
            s++;
        }
        if(curr==sum)
        {
            return true;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	cout<<subarray(arr, n, sum);
	return 0;

}