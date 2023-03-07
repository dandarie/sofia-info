#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int A[1001], n, found = 0;

    ifstream fin ("sortare.in");
    ofstream fout ("sortare.out");

    fin >> n;

    for(int i = 1; i <= n; i++)
        fin >> A[i];

    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(A[i] < A[j])
                swap(A[i], A[j]);

    for(int i = 1; i <= n; i++)
            fout << A[i] << " ";

    return 0;
}
