#include <bits/stdc++.h>
const int maxn=2e5+10;
 
using namespace std;
 
typedef long long ll;
 
ll n,v[maxn],res=1;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
 
    for(int i=1;i<=n;i++)
        cin>>v[i];
    
    sort(v+1,v+n+1);
    
    for(int i=1;i<=n&&res>=v[i];i++)
        res+=v[i];
    
    cout<<res;
        
    return 0;
}
