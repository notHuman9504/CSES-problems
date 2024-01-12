#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string s;
    cin>>s;
    int maxi=1;
    int cnt=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else{
            cnt=1;
        }
        maxi=max(maxi,cnt);
    }
    cout<<maxi;
    return 0;
}