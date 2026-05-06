#include <iostream>

using namespace std;

int main() {
  long long x = 1;
  int n = 5;
  long long m = 1000000007;

  for (int i = 2; i <= n; i++) {
    x = (x * i) % m;
    cout << x << "\n";
  }
  cout << x;
}
