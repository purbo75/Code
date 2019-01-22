#include<iostream>
using namespace std;

int main(void)
{
    cout<<"enter item number : ";
    int n;
    cin>>n;

    cout<<"enter weight & value "<<endl;
    int item[n],cost[n];
    for(int i=0; i<n ; i++) cin>>item[i]>>cost[i];

     cout<<"enter capacity : ";
    int cap;
    cin>>cap;

    int dp[n+2][cap+2];

    for(int i=0 ; i<=n ; i++)
    {
        for(int j=0 ; j<=cap ; j++)
        {
            if (i==0 || j==0)
                dp[i][j] = 0;
            else if (item[i-1] <= j)
                dp[i][j] = max(cost[i-1] + dp[i-1][j-item[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    cout<<dp[n][cap]<<endl;

    int max1=dp[n][cap],w=cap;

    cout<<"elements are: "<<endl;

    for(int i=n ; i>0 && max1>0 ; i--)
    {
        if(max1==dp[i-1][w])
            continue;

        else
        {
            cout<<item[i-1]<<"\t";

            max1=max1-cost[i-1];
            w=w-item[i-1];
        }
    }

    cout<<endl;

    return 0;
}

/*
if(i==0||j==0)
                 dp[i][j]=0;

             else if(item[i-1]<=j)
             dp[i][j]=max(cost[i-1]+dp[i-1][j-item[i-1]],dp[i-1][j]);
             else
                 dp[i][j]=dp[i-1][w];
                 */

/*
5
1 120
7 400
4 280
3 150
4 200
10
*/
