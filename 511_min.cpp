#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, k, min, pos;

    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    // Minimum sort
    for(int i = 1; i <= k - 1; i++) {
        min = A[i];
        pos = i;
        for(int j = i + 1; j <= k; j++)
            if(A[j] < min) {
                min = A[j];
                pos = j;
            }
        if(pos != i)
            swap(A[i], A[pos]);
    }

    // Minimum sort
    for(int i = k + 1; i <= n - 1; i++) {
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
            cout << A[i] << " ";

    return 0;
}
