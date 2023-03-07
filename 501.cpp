#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, i, x, first;
  bool equal = true;

  cin >> n;

  cin >> first;

  for(i = 1; i < n; i++) {
    cin >> x;

    if(x != first) {
      equal = false;
    }
  }

  cout << ( equal ? "DA" : "NU" );

  return 0;
}
