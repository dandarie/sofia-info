#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, m, k = 1, a[100001], b[100001], c[200002];
    ifstream fin("interclasare3.in");
    ofstream fout("interclasare3.out");

    fin >> n;
    fin >> m;

    for(int i = 1; i <= n; i++)
        fin >> a[i];

    for(int j = 1; j <= m; j++)
        fin >> b[j];

    int i = 1;
    int j = m;

    while(i <= n && j > 0) {
        if(a[i] > b[j]) {
            c[k] = b[j];
            j--;
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

    while(j > 0) {
        c[k] = b[j];
        j--;
        k++;
    }

    k = 1;
    for(int l = 1; l <= m + n; l++) {
        if(c[l] % 2 == 0) {
            fout << c[l] << " ";
            if(k % 20 == 0)
                fout << endl;
            k++;
        }

    }

    return 0;
}
