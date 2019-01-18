#include<iostream>

using namespace std;

int *cost , *weight,cap,n;

int fun(int i , int w)
{
    cout<<n<<"\t"<<i<<endl;

    if(i>=n) return 0

    int profit1,profit2;

    cout<<"1st place \t"<<w<<"\t"<<weight[i]<<"\t"<<i<<"\t"<<cap<<endl;

    if((w+weight[i])<=cap)
    {
        cout<<"yes"<<endl;

        profit1=cost[i]+fun(i+1,w+weight[i]);

        cout<<"2nd place \t"<<cost[i]<<"\t"<<weight[i]<<"\t"<<endl;
    }
    else profit1=0;

    cout<<"3rd place \t"<<profit1<<endl;

    profit2=fun(i+1,w);

    cout<<"4rd place \t"<<profit1<<"\t"<<profit2<<endl;

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
