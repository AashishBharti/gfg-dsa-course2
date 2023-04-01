#include<bits/stdc++.h>

using namespace std;

int max_appe(int l[],int r[],int n)
{
    int res=0;
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=l[i];j<=r[i];j++)
        {
            freq[j]+=1;
        }
        
        for(int i=1;i<100;i++)
        {
            
            if(freq[i]>freq[res])
            {
                res=i;
            }
            
        }
        
        
    }
    return res;
    
}

int main()
{
    int L[] = { 1,2,4 };
	int R[] = { 4,5,7 };
	int n = sizeof(L) / sizeof(L[0]);

	cout << max_appe(L, R, n) << endl;
	return 0;
}