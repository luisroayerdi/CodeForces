#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &a, vector<int> &b) {
  vector<int> c;
  auto i = 0;
  auto j = 0;

  while (i < (int)a.size() and j < (int)b.size()) {
    if (a[i] <= b[j]) {
      c.push_back(a[i]);
      i++;
    } else {
      c.push_back(b[j]);
      j++;
    }
  }

  while (i < (int)a.size()) {
    c.push_back(a[i]);
    i++;
  }

  while (j < (int)b.size()) {
    c.push_back(b[j]);
    j++;
  }

  return c;
}

vector<int> sortArray(vector<int> &nums) {
  auto n = nums.size();

  if (n == 1) {
    return nums;
  }

  auto m = n / 2;

  vector<int> a;
  for (int i = 0; i < (int)m; i++) {
    a.push_back(nums[i]);
  }

  vector<int> b;
  for (int i = m; i < (int)n; i++) {
    b.push_back(nums[i]);
  }

  a = sortArray(a);
  b = sortArray(b);

  return merge(a, b);
}

int main() {
  vector<int> nums = {5, 2, 8, 1, 9, 3};

  cout << "Before: ";
  for (int x : nums)
    cout << x << " ";
  cout << endl;

  vector<int> sorted = sortArray(nums);

  cout << "After:  ";
  for (int x : sorted)
    cout << x << " ";
  cout << endl;

  return 0;
}
