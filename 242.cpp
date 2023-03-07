#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, n, m, k = 1, a[100001], b[100001], c[200002];

    ifstream fin ("interclasm.in");
    ofstream fout ("interclasm.out");

    fin >> x;

    fin >> n;

    for(int i = 1; i <= n; i++)
        fin >> a[i];

    fin >> m;

    for(int j = 1; j <= m; j++)
        fin >> b[j];

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

    int l = 1;
    while (l < m + n) {
        if(c[l] == c[l + 1])
            l++;
        else if(c[l] % x == 0)
            fout << c[l] << " ";
        l++;
    }

    if(l == m + n && c[l] % x == 0)
        fout << c[l];

    return 0;
}
