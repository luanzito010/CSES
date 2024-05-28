#include <bits/stdc++.h>
const int maxn=2e5+10;
 
using namespace std;
 
int n,x,r,sum,v[maxn];
bool m[maxn];
 
int main(){
    cin>>n>>x;
    
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    sort(v,v+n);
    
    int i=0,j=n-1;
    while(i<j){
        if(v[i]+v[j]>x) j--;
        else{
            m[i]=m[j]=1;
            r++;
            i++;
            j--;
        }
    }
    
    for(int i=0;i<n;i++)
        if(!m[i]) r++;
    
    cout<<r;
 
    return 0;
}
