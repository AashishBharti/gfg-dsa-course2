#include<bits/stdc++.h>

using namespace std;

bool is_anagram(string s1,string s2)
{
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    // int n,m;
    // cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    cout<<is_anagram(s1,s2);

}