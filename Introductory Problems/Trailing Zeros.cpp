#include <bits/stdc++.h>
 
using namespace std;
 
int n,r,aux=5;
 
int main(){
    
    cin>>n;
    
    for(int i=1;n/aux;i++){
        r+=(n/aux);
        aux*=5;
    }
    
    cout<<r;
    
    return 0;
}
