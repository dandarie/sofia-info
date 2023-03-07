#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, found = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    // Insertion sort
    for(int i = 2; i <= n; i++) {
        int j = i;
        while(j > 1 && A[j] > A[j - 1]) {
            swap(A[j], A[j - 1]);
            j--;
        }
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
