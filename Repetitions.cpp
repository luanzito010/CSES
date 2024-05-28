#include <iostream>
 
using namespace std;
 
int N, R;
string S;
char aux;
 
int main()
{
    cin >> S;
    
    for(int i=0;i<(int)S.size();i++)
    {
        int T=0;
        aux = S[i];
        while(aux == S[i])
        {
            T++;
            aux = S[i];
            i++;
        }
        i--;
        R = max(R, T);
    }
    
    cout << R << "\n";
 
    return 0;
}
