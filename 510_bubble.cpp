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
    int A[1001], n, found = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    for (int i = 1; i <= n - 1; i++)
            for (int j = 1; j <= n - i; j++)
                if (A[j] > A[j + 1])
                    swap(A[j], A[j + 1]);

    for(int i = 1; i <= n; i++)
        if(prim(A[i]))
            cout << A[i] << " ";

    return 0;
}
