#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, k;

    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    // Insertion sort
    for(int i = 2; i <= k; i++) {
            int j = i;
            while(j > 1 && A[j] < A[j - 1]) {
                swap(A[j], A[j - 1]);
                j--;
            }
        }

    // Insertion sort
    for(int i = k + 1; i <= n; i++) {
        int j = i;
        while(j > k + 1 && A[j] > A[j - 1]) {
            swap(A[j], A[j - 1]);
            j--;
        }
    }

    for(int i = 1; i <= n; i++)
            cout << A[i] << " ";

    return 0;
}
