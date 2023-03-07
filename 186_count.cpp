#include <iostream>
using namespace std;

int main()
{
    int A[1001], MIN[1001], C[1001], S[10001], n;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> A[i];

    for(int i = 1; i <= n; i++) {

        MIN[i] = A[i] % 10;

        while(A[i] > 0) {

            if(MIN[i] > A[i] % 10)
                MIN[i] = A[i] % 10;

            A[i] /= 10;
        }
    }

    for(int i = 1; i <= n - 1 ; i++)
        for(int j = i + 1; j <= n ; j++)
            if(MIN[i] > MIN[j])
                C[i]++;
            else
                C[j]++;
    for(int i = 1; i <= n; i++)
        S[C[i] + 1] = MIN[i];

    int i = 2;
    while(S[1] == 0 && i <= n) {
        swap(S[1], S[i]);
        i++;
    }


    for(int i = 1; i <= n; i++)
        cout << S[i];

    return 0;
}
