#include<bits/stdc++.h>

using namespace std;

bool ispal(string str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    if(rev==str)
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
    string str="abbc";
    cout<<ispal(str);

}