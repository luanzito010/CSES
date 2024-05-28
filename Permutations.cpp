#include <iostream>
 
using namespace std;
 
int N;
 
void par()
{
    for(int i=2;i<=N;i+=2)
        cout << i << " ";
}
 
void impar()
{
    for(int i=1;i<=N;i+=2)
        cout << i << " ";
}
 
int main()
{
    cin >> N;
    
    if(N <= 3 && N != 1) cout << "NO SOLUTION\n";
    else
    {
        if(N%2)
        {
            impar();
            par();
        }
        else 
        {
            par();
            impar();
        }
        cout << "\n";
    }
 
    return 0;
}
