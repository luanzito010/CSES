#include<bits/stdc++.h>
using namespace std;
 
string s;
int a,b;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    map<char,int> m,p;
    for(char i : s)
        m[i]++;
    bool ok = false;
    char meio;
    for(auto &[i,j] : m) {
        if(j & 1) {
            if(!ok) {
                ok = 1;
                meio = i;
            }
            else {
                cout << "NO SOLUTION";
                return 0;
            }
            j--;
        }
        
        p[i] += (j / 2);
 
    }
 
    if(!ok && (int) s.size() & 1) {
        cout << "NO SOLUTION";
        return 0;
    }
    else if(ok && (int) s.size() % 2 == 0) {
        cout << "NO SOLUTION";
        return 0;
    }
 
    vector<char> v;
 
    for(auto [i,j] : p) {
        for(int k = 1; k <= j; k++) {
            cout << i;
            v.push_back(i);
        }
    }
 
    reverse(v.begin(),v.end());
 
    if(ok) cout << meio;
 
    for(char i : v)
        cout << i;
 
    return 0;
}
