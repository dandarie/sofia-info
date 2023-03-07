#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n, k, i, j, dc = 0, occ = 0;

  cin >> n;

  // X: șirul original, D: șirul de valori unice
  int X[n], D[n];

  for(i = 0; i < n; i++) {
    cin >> X[i];
  }

  cin >> k;

  // aflăm valorile unice
  for(i = 0; i < n; i++) {

    for(j = 0; j < i; j++) {
      // dacă numărul anterior e egal cu cel curent, nu e distinct
      if(X[i] == X[j]) {
        break;
      }
    }

    // dacă i == j, am ieșit din for fără break
    if(i == j) {
      D[dc] = X[i];
      dc++;
    }
  }

  // pentru fiecare valoare distinctă
  for(i = 0; i < dc; i++) {
    // resetăm numărul de apariții
    occ = 0;
    // adunăm aparițiile pentru fiecare valoare distinctă din șir
    for(j = 0; j < n; j++) {
      if(X[j] == D[i]) {
        occ++;
      }
    }
    // dacă aparițiile sunt fix k, afișăm
    if(occ == k) {
      cout << D[i] << " ";
    }
  }

  return 0;
}
