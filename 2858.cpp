#include <iostream>

using namespace std;

int main()
{
    int i, n, v[1001], sumEven = 0, sumEvenIndex = 0, sumMultipleOfTen = 0, sumMultipleOfThreeOddIndex = 0;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> v[i];

    for(i = 0; i < n; i++) {
        if(v[i] % 2 == 0)
            sumEven += v[i];
        if((i + 1) % 2 == 0)
            sumEvenIndex += v[i];
        if(v[i] % 10 == 0)
            sumMultipleOfTen ++;
        if((i + 1) % 2 == 1 && v[i] % 3 == 0)
            sumMultipleOfThreeOddIndex += v[i];
    }

    for(i = n - 1; i >= 0; i--)
        cout << v[i] << " ";

    cout << endl;
    cout << sumEven << endl;
    cout << sumEvenIndex << endl;
    cout << sumMultipleOfTen << endl;
    cout << sumMultipleOfThreeOddIndex << endl;

    return 0;
 }
