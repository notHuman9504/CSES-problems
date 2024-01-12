#include<bits/stdc++.h>
using namespace std;
#define int long long
int getValue(int x)
{
    int ans=1;
    ans=x*(x-1) +1;
   
    return ans;

}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int val=1;
        if(x>y)
        {
            val=getValue(x);
            if(x%2)
            {
                val-=(x-y);
            }
            else
            {
                val+=(x-y);
            }
            
        }
        else{
            val=getValue(y);
            if(y%2==0)
            {
                val-=(y-x);
            }
            else
            {
                val+=(y-x);
            }
        }
        cout<<val<<"\n";
    }
    return 0;
}