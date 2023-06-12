#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[],int start,int end )
{
    int profit=0;
    if(start >=end)
    {
        return 0;
    }
    for(int i=start;i<end;i++)//for loop
    {
        for(int j=i+1;j<=end;j++)//for loop
        {
            if(price[j]>price[i])
            {
                int curr_sum=price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);
                profit= max(profit,curr_sum);
            }
            
            
        }
    }
    return profit;

}
int main()
{
    int arr[] = {1, 5, 3, 8, 12}, n = 5;

      cout<<maxProfit(arr, 0, n - 1);
}
