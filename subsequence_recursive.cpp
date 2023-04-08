#include<bits/stdc++.h>

using namespace std;

bool issequence(string s1,string s2,int n,int m)
{
    if(m==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    if(s1[n-1]==s2[m-1])
    {
        return issequence(s1,s1,n-1,m-1);
    }
    else
    {
        return issequence(s1,s2,n-1,m);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    cout<<issequence(s1,s2,n,m);

}