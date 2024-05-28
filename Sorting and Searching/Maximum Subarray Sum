#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
const ll maxn=2e5+10,inf=1e18+10;
 
int n,v[maxn];
ll pref[maxn],aux=inf,resp=-inf;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cin>>v[i];
        pref[i]=v[i]+pref[i-1];
    }
 
    for(int i=1;i<=n;i++){
        aux=min(aux,pref[i-1]);
        resp=max(resp,pref[i]-aux);
    }
    
    cout<<resp;
 
    return 0;
}
