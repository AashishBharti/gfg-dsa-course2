#include<bits/stdc++.h>

using namespace std;

bool arerotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    string temp=s1+s1;
    return (temp.find(s2))!=string::npos;
}

int main()
{
     string s1 = "ABCD";
    string s2 = "CDAB";
    cout << arerotation(s1, s2) << endl;
    return 0;
}