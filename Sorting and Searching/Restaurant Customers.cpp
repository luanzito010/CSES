#include <bits/stdc++.h>
#define sz(x) (int)x.size()
 
using namespace std;
using ll = long long int;
 
const ll maxn=2e5+5,inf=1e18+10;
 
int n,t,v[maxn][2],pref[2*maxn],resp;
set<int>s;
map<int,int>m;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cin>>v[i][0]>>v[i][1];
        v[i][1]++;
        s.insert(v[i][0]);
        s.insert(v[i][1]);
    }
    
    for(auto i:s)
        m[i]=++t;
    
    for(int i=1;i<=n;i++){
        pref[m[v[i][0]]]++;
        pref[m[v[i][1]]]--;
    }
    
    for(int i=1;i<=sz(s);i++){
        pref[i]+=pref[i-1];
        resp=max(resp,pref[i]);
    }
    
    cout<<resp;
 
    return 0;
}
