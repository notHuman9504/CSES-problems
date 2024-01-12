#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin>>n;
    if(n%4==1 || n%4==2)
    {
        cout<<"NO\n";
        return 0;
    }
    if(n%4==0)
    {
        cout<<n/2<<"\n";
        for(int i=1;i<=n/4;i++)
        {
            cout<<i<<" "<<n-i+1<<" ";
        }
        cout<<"\n";
        cout<<n/2<<"\n";
        for(int i=n/4 +1;i<=n/2;i++)
        {
            cout<<i<<" "<<n-i+1<<" ";
        }
        return 0;
    }
    vector<int> hash(n+1,0);
    int sum=(n*(n+1))/2;
    sum/=2;
    sum-=n;
    hash[n]=1;
    int i=1;
    int cnt=1;
    int flag=0;
    while(sum>0)
    {
        
        
        sum-=i;
        hash[i]=1;
        i++;
        cnt++;
        if(sum<=n)
        {
            if(hash[sum]==0)
            {
                hash[sum]=1;
                sum=0;
                cnt++;
                flag=1;
            }

        }

        if(flag)break;

    }
    cout<<cnt<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(hash[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    cout<<n-cnt<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}