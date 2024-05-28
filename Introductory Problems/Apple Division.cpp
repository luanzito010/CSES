#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
const ll maxn=2e1+5,inf=1e18+10;
 
ll n,v[maxn],r=inf;
 
int main()
{
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    for(int i=1;i<=(1<<n)-1;i++){
        ll s1=0,s2=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) s1+=v[j];
            else s2+=v[j];
        }
        r=min(r,abs(s1-s2));
    }
    
    cout<<r;
 
    return 0;
}
