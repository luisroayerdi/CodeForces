#include <iostream>
#include <unordered_map>
#include <vector>;

int main() {
  std::vector<const char *> strs = {"act", "pots", "tops",
                                    "cat", "stop", "hat"};

  std::unordered_map<char, int> count;
  for (int i = 0; i < strs.size(); i++) {
    count[strs[i]]++;
  }

  for (int i = 0; i < strs.size(); i++) {
    std::cout << count[i];
  }
}
