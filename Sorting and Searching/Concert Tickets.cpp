#include <iostream>
#include <set>
 
using namespace std;
 
int n,m,x,resp;
multiset<int>s;
 
int main(){
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    
    for(int i=0;i<m;i++){
        cin>>x;
        auto a=s.upper_bound(x);
        if(a==s.begin()){ 
            cout<<-1<<"\n";
            continue;
        }
        a--;
        cout<<*a<<"\n";
        s.erase(a);
    }
    
    return 0;
}
