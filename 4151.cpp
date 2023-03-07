#include <iostream>

using namespace std;

int main()
{
    int i, n, v[1001], min = -1, max = -1, minIndex = -1, maxIndex = -1, buffer = 1;

    cin >> n;

    for(i = 0; i < n; i++)
            cin >> v[i];

    for(i = 0; i < n; i++) {
        if(min == -1 || v[i] < min) {
            min = v[i];
            minIndex = i;
        }
        if(max == -1 || v[i] > max) {
            max = v[i];
            maxIndex = i;
        }
    }

    if(minIndex > maxIndex) {
        buffer = minIndex;
        minIndex = maxIndex;
        maxIndex = buffer;
    }

    for(i = minIndex; i <= maxIndex; i++)
        cout << v[i] << " ";

    return 0;
 }
