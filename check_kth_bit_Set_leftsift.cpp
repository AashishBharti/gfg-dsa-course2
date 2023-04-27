#include<bits/stdc++.h>
using namespace std;


void isset(int n,int k)
{
    int x=n<<(k-1);
    if((n&x)!=0)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
int main()
{
    int n=5;
    int k=3;
    isset(n,k);
}