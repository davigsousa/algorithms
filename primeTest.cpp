#include <iostream>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  string msg = isPrime(n) ? "It's a Prime!" : "It's not a Prime!";

  cout << msg << endl;

  return 0;
}
