#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, i, x, smallest = 0;
  bool increasing = true;

  cin >> n;


  for(i = 0; i < n; i++) {
    cin >> x;

    if(x < smallest) {
      increasing = false;
    }

    smallest = x;
  }

  cout << ( increasing ? "DA" : "NU" );

  return 0;
}
