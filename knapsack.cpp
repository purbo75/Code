#include<iostream>

using namespace std;

int *cost , *weight,cap,n;

int fun(int i , int w)
{
    if(i>=n) return 0;

    int profit1,profit2;

    if((w+weight[i])<=cap)  profit1=cost[i]+fun(i+1,w+weight[i]);
    else profit1=0;

    profit2=fun(i+1,w);

    return max(profit1,profit2);
}

int main(void)
{
    int j;
    cin>>n;

    weight=new int[n];
    cost=new int [n];

    for(j=0 ; j<n ; j++) cin>>cost[j]>>weight[j];

    cin>>cap;

    cout<<fun(0,0)<<endl;

    return 0;
}
