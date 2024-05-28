#include <iostream>
#define ll long long int
const int maxn = 2e5+10;
 
using namespace std;
 
ll n, r, v[maxn];
 
int main(){
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            r+=(v[i-1]-v[i]);
            v[i] = v[i-1];
        }
    }
    
    cout<<r;
 
    return 0;
}
