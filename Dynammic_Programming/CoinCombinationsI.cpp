#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
// int solve(vector<int> &coins,int x,vector<int> &dp)
// {
//     if(x==0)return 1;
//     if(x<0)return 0;
//     if(dp[x]!=-1)return dp[x];
//     int ans=0;
//     for(auto i: coins){
//         int a=solve(coins,x-i,dp);
//         ans=(a+ans)%mod;
//     }
//     return dp[x]=ans;
// }
signed main()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    vector<int> dp(x+1,0);
    for(auto &i:coins)
    {
        cin>>i;
    }
    dp[0]=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=coins[j])
            {
                dp[i]=(dp[i-coins[j]] + dp[i]) % MOD;
            }
        }
    }
    cout<<dp[x]<<"\n";

    // cout<<solve(coins,x,dp)<<"\n";
    return 0;
}