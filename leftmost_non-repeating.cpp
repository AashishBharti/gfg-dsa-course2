#include<bits/stdc++.h>

using namespace std;

const int CHAR=256;
int leftmost(string str)
{
   for(int i=0;i<str.length();i++)
   {
    bool flag=false;
    for(int j=0;j<str.length();j++)
    {
        if(i!=j && str[i]==str[j])
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        return i;
    }
   }
   return -1;
}

int main()
{
    string str;
    cin>>str;
    cout<<leftmost(str);
}