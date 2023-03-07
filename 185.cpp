#include <iostream>
using namespace std;

int main()
{
    int A[1001], FIRST[1001], n;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    for(int i = 1; i <= n; i++) {
        while(A[i] > 0) {
            FIRST[i] = A[i] % 10;
            A[i] /= 10;
        }
    }

    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            // sortam crescator dupa cifra FIRSTima, cu doua exceptii:
            // 1. nu inversam prima cifra decat cu valori pozitive
            // 2. daca prima cifră e 0, o inversam mereu cu orice altă cifra
            if( (FIRST[i] > FIRST[j] && !(i == 1 && FIRST[j] == 0)) || (i == 1 && FIRST[1] == 0 && FIRST[j] > 0))
                swap(FIRST[i], FIRST[j]);


    for(int i = 1; i <= n; i++)
        cout << FIRST[i];

    return 0;
}
