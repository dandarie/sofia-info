#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    while ( ! (a <= b && b <= c) ) {

        if (a > b)
            swap(a, b);

        if (b > c)
            swap(b, c);

    }

    cout << c - a;

    return 0;
}
