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

    for(int i = min; i < max; i++) {
        for(int j = i + 1; j <= max; j++) {
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";


    return 0;
}
