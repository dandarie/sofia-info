#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, m, k = 1, a[100001], b[100001], c[200002];
    ifstream fin("interclasare1.in");
    ofstream fout("interclasare1.out");

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

    int last = -1;
    k = 1;

    for(int l = 1; l <= m + n; l++) {
        if(c[l] != last) {
            last = c[l];
            fout << c[l] << " ";
            if(k % 10 == 0)
                fout << endl;
            k++;
        }
    }

    return 0;
}
