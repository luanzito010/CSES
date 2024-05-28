#include <bits/stdc++.h>
 
using namespace std;
 
long long int n,s1,s2;
 
int main(){
    
    cin >> n;
    
    s1 = (n * (n + 1)) / 2; //soma de gauss (1 + 2 + 3 + ... + n)
    
    for(int i = 1;i <= n - 1;i++){
        long long int x;
        cin >> x;
        s2 += x;
    }
    
    cout << s1 - s2 << "\n";
 
    return 0;
}
