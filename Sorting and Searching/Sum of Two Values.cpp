#include <bits/stdc++.h>
 
using namespace std;
 
int n,x;
multiset<int> s;
multiset<pair<int,int>> pos;
 
int main(){
    
    cin >> n >> x;
    
    vector<int> v(n + 1);
    
    for(int i = 1;i <= n;i++){
        cin >> v[i];
        s.insert(v[i]);
        pos.insert({v[i],i});
    }
    
    for(int i = 1;i <= n;i++){
        s.erase(s.find(v[i]));
        pos.erase(pos.find({v[i],i}));
        
        auto it = s.lower_bound(x - v[i]);
        
        if(it != s.end() && *it + v[i] == x){
            auto ind = pos.lower_bound({*it,0});
            cout << i << " " << ind->second << "\n";
            return 0;
        }
        
        s.insert(v[i]);
        pos.insert({v[i],i});
    }
    
    cout << "IMPOSSIBLE\n";
 
    return 0;
}
