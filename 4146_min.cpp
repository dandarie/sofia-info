#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, found = 0, min, pos;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    // Minimum sort
    for(int i = 1; i <= n - 1; i++) {
        min = A[i];
        pos = i;
        for(int j = i + 1; j <= n; j++)
            if(A[j] > min) {
                min = A[j];
                pos = j;
            }
        if(pos != i)
            swap(A[i], A[pos]);
    }


    for(int i = 1; i <= n; i++)
        if(A[i] % 10 == 0) {
            cout << A[i] << " ";
            found = 1;
        }

    if(!found)
        cout << "NU EXISTA";

    return 0;
}
