#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int res=a[0];
	    int maxending=a[0];
	    
	   for(int i=1;i<n;i++)
	   {
	       maxending=max(maxending+a[i],a[i]);
	       res=max(res,maxending);
	       
	   }
	   cout<<res-1<<endl;
	
	return 0;
}
}
