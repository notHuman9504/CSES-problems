#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
// #define int long long
int solve(int i,int j,vector<vector<char>> &grid,vector<vector<int>> &dp)
{
    if(i<0 || j<0)return 0;
    if(grid[i][j]=='*')return 0;
    if(i==0 && j==0)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    int up=solve(i-1,j,grid,dp);
    int down=solve(i,j-1,grid,dp);
    return dp[i][j]=(up+down)%MOD;
}
signed main()
{
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));
    vector<vector<int>> dp(n,vector<int>(n,-1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    cout<<solve(n-1,n-1,grid,dp);
    return 0;
}