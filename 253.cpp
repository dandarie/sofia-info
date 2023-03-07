#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if(n % 2 == 0)
        n += 1;

    cout << n + 1 << " " << n + 3;

    return 0;
}
