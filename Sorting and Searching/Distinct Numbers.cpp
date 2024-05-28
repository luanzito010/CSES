#include <bits/stdc++.h>
 
using namespace std;
 
int n;
set<int> s;
 
int main(){
    cin >> n;
    
    for(int i = 1;i <= n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << (int) s.size() << "\n";
 
    return 0;
}
