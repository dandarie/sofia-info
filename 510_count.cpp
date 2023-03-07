#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;

    return true;
}

int main()
{
    int A[1001], C[1001], S[1001], n, found = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    for(int i = 1; i <= n - 1 ; i++)
        for(int j = i + 1; j <= n ; j++)
            if(A[i] > A[j])
                C[i]++;
            else
                C[j]++;
    for(int i = 1; i <= n; i++)
        S[C[i] + 1] = A[i];

    for(int i = 1; i <= n; i++)
        if(prim(S[i]))
            cout << S[i] << " ";

    return 0;
}
