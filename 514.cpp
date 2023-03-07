#include <iostream>
using namespace std;

bool prime(int a, int b)
{
    while(b) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a == 1;
}

int main()
{
    int a[1001], n;

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i < n - 1 ; i++)
        for(int j = i + 1; j <= n - 1; j++)
            if(a[i] < a[j])
                swap(a[i], a[j]);

    for(int i = 1; i <= n - 1; i++)
        if(prime(a[i], a[n]))
            cout << a[i] << " ";


    return 0;
}
