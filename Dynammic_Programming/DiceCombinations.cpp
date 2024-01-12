#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9 +7;
int solve(int n,vector<int> &dp)
{
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    int cnt=0;
    for(int i=1;i<7;i++)
    {
        cnt=(cnt + solve(n-i,dp))%mod;
    }
    return dp[n]=cnt;
}
signed main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<solve(n,dp)<<"\n";
    return 0;
}