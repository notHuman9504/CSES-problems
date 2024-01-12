#include<bits/stdc++.h>
using namespace std;
// #define int long long
int solve(int n,vector<int> &dp)
{

    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int num=n;
    
    int mx=1;
    while(num)
    {
        mx=max(mx,num%10);
        num/=10;
    }
    return dp[n]=1+solve(n-mx,dp);
}
signed main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<solve(n,dp)<<"\n";
    return 0;
}