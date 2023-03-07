#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, max = 0, k = 1;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    for(int i = 1; i <= n; i++)
        if(A[i] > max) {
            max = A[i];
            k = i;
        }

    for(int i = 1; i < k; i++)
        for(int j = i + 1; j <= k; j++)
            if(A[i] > A[j])
                swap(A[i], A[j]);

    for(int i = k + 1; i < n; i++)
            for(int j = i + 1; j <= n; j++)
                if(A[i] < A[j])
                    swap(A[i], A[j]);

    for(int i = 1; i <= n; i++)
            cout << A[i] << " ";

    return 0;
}
