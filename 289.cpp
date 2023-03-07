#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, i, x;

  cin >> n;

  bool hasEven = false;

  for(i = 0; i < n; i++) {
    cin >> x;

    if(x % 2  == 1) {
      hasEven = true;
    }
  }

  cout << ( hasEven ? "DA" : "NU" );

  return 0;
}
