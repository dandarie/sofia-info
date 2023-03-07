#include <iostream>

using namespace std;


int main()
{
  int n, i, cnt = 0;

  float median = 0;

  cin >> n;

  int x[n];

  for(i = 0; i < n; i++) {
    cin >> x[i];

    // prima dată facem suma
    median += x[i];
  }

  // apoi împărțim la lungimea vectorului
  median /= n;

  for(i = 0; i < n; i++) {
    if(x[i] > median) {
      cnt++;
    }
  }

  cout << cnt;
}
