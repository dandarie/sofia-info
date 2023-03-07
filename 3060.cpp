#include <iostream>

using namespace std;

int main()
{
    float v;
    int d, t;

    cin >> v >> d;

    // d = v * t => t = d / v
    // v(km/h) = v(1000 metri/60 minute) => v(metri/minut) = v(km/h) / 0.06
    // t(minute) = d(metri) / v(metri/minut) = d(metri) / (v(km/h) / 0.06) = 0.06 * d(metri) / v(km/h)

    t = 0.06 * d / v;

    // (0.06 * d / v) real, t int
    if((0.06 * d / v) - t > 0)
        t++;

    cout << t;

    return 0;
}
