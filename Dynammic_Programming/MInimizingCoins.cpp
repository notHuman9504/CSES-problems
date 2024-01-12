#include<bits/stdc++.h>
using namespace std;
#define int long long
int solve(vector<int> &coins,int x,vector<int> &dp)
{
    if(x==0)return 0;
    if(x<0)return INT_MAX;
    if(dp[x]!=-1)return dp[x];
    int mini=INT_MAX;
    for(auto i: coins){
        int a=1+solve(coins,x-i,dp);
        mini=min(mini,a);
    }
    return dp[x]=mini;
}
signed main()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    vector<int> dp(x+1,-1);
    for(auto &i:coins)
    {
        cin>>i;
    }
    int ans=solve(coins,x,dp);
    if(ans>=INT_MAX)
        ans=-1;
    cout<<ans<<"\n";
    return 0;
}