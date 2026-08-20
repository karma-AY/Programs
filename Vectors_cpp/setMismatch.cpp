#include <iostream>
#include <vector>

std::vector<int> missmatch(std::vector<int> &nums) {
  int dups = -1, miss = -1;
  std::vector<int> v(nums.size() + 1, 0);

  for (int i = 0; i < nums.size(); i++)
    v[nums[i]]++;

  for (int i = 1; i <= nums.size(); i++) {
    if (v[i] == 0)
      miss = i;
    if (v[i] == 2)
      dups = i;
  }
  return {dups, miss};
}
int main() {
  std::vector<int> set;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int val;
    std::cin >> val;
    set.push_back(val);
  }

  std::vector<int> res = missmatch(set);
  for (auto &v : res)
    std::cout << v << " ";
  return 0;
}
