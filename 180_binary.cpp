#include <iostream>
using namespace std;

int main()
{
    int a[1001], n, min = 1, max = 1;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(i == 1 || a[i] < a[min])
            min = i;
        if(a[i] > a[max])
            max = i;
    }

    if(min > max) {
        swap(min, max);
    }

    for (int i = min + 1; i <= max; ++i) {
        int j, selected, start, end, loc;
        j = i - 1;
        selected = a[i];
        start = min;
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

    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";


    return 0;
}
