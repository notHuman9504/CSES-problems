#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2)n=n*3+1;
        else n/=2;
    }
    cout<<1;
    return 0;
}