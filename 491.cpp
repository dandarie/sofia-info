#include <iostream>

using namespace std;

int main()
{
    int n, v[1001], first = -1, last = -1, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    if(first == -1 || last == -1)
        cout << "NU EXISTA";
    else {
        for(int i = first; i <= last; i++)
            sum += v[i];
        cout << sum;
    }

    return 0;
 }
