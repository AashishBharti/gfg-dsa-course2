#include<bits/stdc++.h>
using namespace std;


void patsearching(string &txt,string &pat)
{
    int n=txt.length();
    int m=pat.length();

    for(int i=0;i<=n-m;)
    {
        int j;
        for(j=0;j<m;j++)
    {
        if(pat[j]!=txt[i+j])
        {
            break;
        }

    }
    if(j==m)
    {
        cout<<i<<" ";
    }
    if(j==0)
    {
        i++;
    }
    else
    {
        i=(i+j);
    }
    }
        
       
    
}

  

int main()
{
    string txt = "ABCABCD";string pat="ABCD";
    cout<<"All index numbers where pattern found:"<<" ";
    patsearching(txt,pat);
    
    return 0; 

}