#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, max1 = 0, max2 = 0, x;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;

        if (x > max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if (x >= max2)
        {
            max2 = x;
        }
    }

    cout << max1 << " " << max2;

    return 0;
}
