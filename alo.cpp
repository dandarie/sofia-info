#include <fstream>
#include <iostream>

using namespace std;

int main()
{

  ofstream outf;

  int E, N, Nr, D;

  cin >> E >> N;

  while(N > 0) {

    cin >> Nr >> D;

    if (Nr % 10 == 5) {

      if (Nr / 10000 == 1) {
        E -= D * 2;
      }

      if (Nr / 10000 == 2) {
        E += D;
      }

    }

    N--;

  }

  outf.open("alo.out");
  outf << E;
  outf.close();

  return 0;
}
