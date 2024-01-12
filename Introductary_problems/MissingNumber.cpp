#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    unordered_set<int> st;
    for(int i=0;i<n-1;i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            cout<<i;
            break;
        }
    }
    return 0;
}