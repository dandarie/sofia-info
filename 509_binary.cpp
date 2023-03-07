#include <iostream>

using namespace std;

int main()
{
    int a[1001], n;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 2; i <= n; ++i) {
        int j, selected, start, end, loc;
        j = i - 1;
        selected = a[i];
        start = 1;
        end = j;
        loc = start;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (selected == a[mid]) {
                loc = mid + 1;
                break;
            }
            else if (selected > a[mid])
                start = mid + 1;
            else
                end = mid - 1;

            loc = start;
        }

        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = selected;
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";

    return 0;
}
