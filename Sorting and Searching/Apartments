#include <iostream>
#include <set>
 
using namespace std;
 
int n,m,k,resp;
multiset<int>v,s;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m>>k;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.insert(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    
    for(auto i:v){
        auto a=s.lower_bound(i-k);
        int x=*a;
        if(x>=i-k&&x<=i+k){
            s.erase(a);
            resp++;
        }
    }
    
    cout<<resp;
    
    return 0;
}
