#include<bits/stdc++.h>
using namespace std;
#define int long long
int possibleMoves(int x,int y,int n)
{
    int cnt=0;
    if(x+1<n && y+2<n)
    {
        cnt++;
    }
    if(x+2<n && y+1<n)
    {
        cnt++;
    }
    if(x+2<n && y-1>=0)
    {
        cnt++;
    }
    if(x+1<n && y-2>=0)
    {
        cnt++;
    }
    if(x-1>0 && y+2<n)
    {
        cnt++;
    }
    if(x-2>0 && y+1<n)
    {
        cnt++;
    }
    return cnt;
}
int solve(int n)
{
   
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=possibleMoves(0,i,n);
    }
    for(int i=1;i<n;i++)
    {
        ans+=possibleMoves(i,0,n);
    }
    return ans;
}
signed main()
{
    int t;
    cin>>t;
    int prev=0;
    for(int i=1;i<=t;i++)
    {
        if(i==1)
        {
            cout<<0<<"\n";
            continue;
        }
        int j=(i*i)-1;
        int sum=(j*(j+1))/2;
        prev+=solve(i);
        cout<<sum-prev<<"\n";
        
    }
    return 0;
}