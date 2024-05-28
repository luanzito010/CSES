#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
const ll maxn=2e5+10,inf=1e18+10;
 
ll n,v[maxn],pref[maxn],r=inf;
 
int main()
{
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
        cin>>v[i];
    
    sort(v+1,v+n+1);
    
    for(int i=1;i<=n;i++)
        pref[i]=pref[i-1]+v[i];
    
    for(int i=1;i<=n;i++)
        r=min(r,v[i]*i-pref[i]+pref[n]-pref[i]-v[i]*(n-i));
    
    cout<<r;
    
    return 0;
}
