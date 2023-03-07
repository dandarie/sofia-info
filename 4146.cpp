#include <iostream>
using namespace std;

int main()
{
    int A[1001], n, found = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(A[i] < A[j])
                swap(A[i], A[j]);

    for(int i = 1; i <= n; i++)
        if(A[i] % 10 == 0) {
            cout << A[i] << " ";
            found = 1;
        }

    if(!found)
        cout << "NU EXISTA";

    return 0;
}
