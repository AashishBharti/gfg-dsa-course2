#include<bits/stdc++.h>

using namespace std;

bool ispal(string str)
{
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str="abba";
    cout<<ispal(str);

}