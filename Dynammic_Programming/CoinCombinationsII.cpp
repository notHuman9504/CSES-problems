#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define MOD 1000000007
// int solve(vector<int> &coins,int i,int x,vector<vector<int>> &dp)
// {
//     if(x<0)return 0;
//     if(x==0)return 1;
//     if(i==coins.size())return 0;

//     if(dp[i][x]!=-1)return dp[i][x];
//     int take=solve(coins,i,x-coins[i],dp);
//     int nottake=solve(coins,i+1,x,dp);
//     return dp[i][x]=(take+nottake)% MOD;
// }
signed main()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1));
    for(int i=0;i<n;i++)
    {
        dp[i][0]=1;
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=x;j++)
        {
            int take=0;
            int nottake=dp[i+1][j];
            if(j>=coins[i])
            {
                take=dp[i][j-coins[i]];
            }
           
            dp[i][j]=(take+nottake)%MOD;
        }
    }

    cout<<dp[0][x];
    return 0;
}