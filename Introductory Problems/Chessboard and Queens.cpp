#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
const ll maxn=2e1+5,inf=1e18+10;
 
int r;
int l[8],d1[15],d2[15];
char c[8][8];
 
void solve(int cur){
    if(cur==8){
        r++;
        return;
    }
    
    for(int i=0;i<8;i++){
        if(c[i][cur]!='*'&&!l[i]&&!d1[i+cur]&&!d2[i-cur+7]){
            l[i]=d1[i+cur]=d2[i-cur+7]=1;
            solve(cur+1);
            l[i]=d1[i+cur]=d2[i-cur+7]=0;
        }
    }
    
}
 
int main()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            cin>>c[i][j];
    
    solve(0);
    cout<<r;
 
    return 0;
}
