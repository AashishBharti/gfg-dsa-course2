#include<bits/stdc++.h>

using namespace std;

int two_odd(int a[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x^a[i];
    }
    int k=(x&(~(x-1)));
    int res1=0;
    int res2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&k!=0)
        {
            res1=res1^a[i];
        }
        else
        {
            res2=res2^a[i];
        }

    }
    cout<<res1<<" "<<res2<<endl;
 
}

int main()
{
    int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
	
    two_odd(arr, n);

}