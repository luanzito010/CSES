#include <iostream>
const int MOD = 1e9+7;
 
using namespace std;
 
long long int N, R=1;
 
int main()
{
    cin >> N;
    for(int i=1;i<=N;i++)
        R = (R*2)%MOD;
    cout << R << "\n";
 
    return 0;
}
