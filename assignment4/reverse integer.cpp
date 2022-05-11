#include <iostream>
using namespace std;

int main() {

  int n, rn= 0, rem;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    rem = n % 10;
    rn = rn * 10 + rem;
    n /= 10;
  }

  cout << "Rn= " << rn;

  return 0;
}
