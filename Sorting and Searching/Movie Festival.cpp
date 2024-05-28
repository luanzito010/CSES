#include<bits/stdc++.h>
using namespace std;
 
int n;
vector<pair<int,int>>v;
 
int main()
{
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }
    
    sort(v.begin(),v.end());
    
    int r=1,cur=v[0].first;
    
    for(int i=1;i<n;i++){
        int at=v[i].second;
        if(at>=cur){
            r++;
            cur=v[i].first;
        }
    }
        
    cout<<r;
    
    return 0;
}
