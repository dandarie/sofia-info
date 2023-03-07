#include <iostream>

using namespace std;


int main()
{
  int n, i, min = 0, max = 0, cnt = 0;

  cin >> n;

  int x[n];

  for(i = 0; i < n; i++) {
    cin >> x[i];

    // dacă e primul număr din vector nu există minim, așa că îl facem minim
    if(i == 0 || x[i] < min) {
      min = x[i];
    }

    // dacă e primul număr din vector nu există maxim, așa că îl facem maxim
    if(i == 0 || x[i] > max) {
      max = x[i];
    }
  }

  for(i = 0; i < n; i++) {
    if(x[i] == max - min) {
      cnt++;
    }
  }

  cout << cnt;
}
