#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  string x;
  cin >> x;
  if (x == "++X" or x == "X++") {
    count += 1;
  } else if (x == "--X" or x == "X--") {
    count -= 1;
  }
}
