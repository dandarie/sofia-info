#include <iostream>

using namespace std;

int main()
{
    int n, curr, x, y, pos;

    cin >> n;
    x = -1;
    y = -1;

    while (pos < n)

        cin >> curr;

        if ( pos % 2 == 0 && x < curr ) {
            x = curr;
        }

        if ( pos % 2 == 1 && curr >= 10 && curr <= 99 && ( y < 0 || y > curr ) ) {
            y = curr;
        }

        pos++;

    }

    cout << x << " " << y;

    return 0;
}
