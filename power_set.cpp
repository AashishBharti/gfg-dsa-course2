#include<bits/stdc++.h>

using namespace std;

void prinpowerset(string s)
{
    int n=s.length();
    int psize=pow(2, n);
    for(int i=0;i<psize;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    
}

int main()
{
	string s = "abc";

    prinpowerset(s); 
}