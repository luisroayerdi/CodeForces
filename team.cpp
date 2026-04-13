#include <iostream>
#include <vector>
using namespace std;

int main() {
  int columns = 3;

  int rows;
  cin >> rows;

  vector<vector<int>> vec(rows, vector<int>(columns));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> vec[i][j];
    }
  }

  int count = 0;

  for (int i = 0; i < rows; i++) {
    int count2 = 0;
    for (int j = 0; j < columns; j++) {
      if (vec[i][j] == 1) {
        count2 += 1;
      }
    }
    if (count2 >= 2) {
      count += 1;
    }
  }

  cout << count;
}
