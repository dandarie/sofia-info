#include <iostream>

using namespace std;

int main()
{
    int n, m, k = 1, a[100001], b[100001], c[200002];

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;

    for(int j = 1; j <= m; j++)
        cin >> b[j];

    int i = 1;
    int j = 1;

    while(i <= n && j <= m) {
        if(a[i] > b[j]) {
            c[k] = b[j];
            j++;
        }
        else {
            c[k] = a[i];
            i++;
        }

        k++;
    }

    while(i <= n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j <= m) {
        c[k] = b[j];
        j++;
        k++;
    }

    int last = -1;

    int x = 0, y = 0, un[200002], in[10001];
    for(int l = 1; l <= m + n; l++) {
        if(last != c[l]) {
            x++;
            un[x] = c[l];
        } else {
            y++;
            in[y] = c[l];
        }

        last = c[l];
    }

    for(int l = 1; l <= x; l++)
        cout << un[l] << " ";

    cout << endl;

    for(int l = 1; l <= y; l++)
        cout << in[l] << " ";

    return 0;
}
