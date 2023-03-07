#include <iostream>
#include <fstream>

using namespace std;

int digit_sum(int x) {
    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    int a[1001], n;

    ifstream fin ("sortcif.in");
    ofstream fout ("sortcif.out");

    fin >> n;

    for (int i = 1; i <= n; i++)
        fin >> a[i];

    for (int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(digit_sum(a[i]) > digit_sum(a[j]))
                swap(a[i], a[j]);

    for (int i = 1; i <= n; i++)
        fout << a[i] << " ";

    return 0;
}
