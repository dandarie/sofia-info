#include <iostream>
using namespace std;

int main()
{
    int A[1001], MIN[1001], n;

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

    for (int i = 1; i <= n - 1; i++)
        for (int j = 1; j <= n - i; j++)
            if (MIN[j] > MIN[j + 1])
                swap(MIN[j], MIN[j + 1]);

    int i = 2;
    while(MIN[1] == 0 && i <= n) {
        swap(MIN[1], MIN[i]);
        i++;
    }


    for(int i = 1; i <= n; i++)
        cout << MIN[i];

    return 0;
}
