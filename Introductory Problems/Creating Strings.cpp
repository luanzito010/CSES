#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
const ll maxn=2e1+5,inf=1e18+10;
 
int n;
vector<string>v;
string s;
 
int main()
{
    cin>>s;
    
    sort(s.begin(),s.end());
    
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    
    cout<<v.size()<<"\n";
    for(auto i:v)
        cout<<i<<"\n";
 
    return 0;
}
