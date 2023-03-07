#include <iostream>

using namespace std;

int main()
{
    int x, y, n;

    cin >> x >> y;

    n = y / x;

    if(y % x > 0)
        n++;

    cout << n;

    return 0;
}
