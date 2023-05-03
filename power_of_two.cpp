#include<bits/stdc++.h>

using namespace std;

bool ispow_2(int n)
{
    if(n==0)
    {
        return false;
    }
    while(n>1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n=n/2;
    }
    return true;

}

int main()
{
    int n=6;
    cout<<ispow_2(n);
}