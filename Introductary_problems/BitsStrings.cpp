#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
signed main()
{
    int n;
    cin>>n;
    int ans=1;
    while(n--)
    {
        ans=(ans<<1)%mod;
    }
    cout<<ans<<"\n";
    return 0;
}