#include<bits/stdc++.h>

using namespace std;


int tbl[256];
void initilize()
{
    for(int i=1;i<256;i++)
    {
        tbl[i]=tbl[i&(i-1)]+1;
    }
}
int countsetbit(int n)
{
    return tbl[n&255]+tbl[(n>>8)&255]+tbl[(n>>16)&255]+tbl[(n>>24)&255];
}


int main()
{
    initilize();
    int n=40;
    cout<<countsetbit(n);
}