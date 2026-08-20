#include <algorithm>
#include <iostream>
#include <vector>
int maxArea(std::vector<int> &height) {
  int st, end;
  st = 0;
  end = height.size() - 1;
  int ans = 0;

  while (st < end) {
    int length = std::min(height[st], height[end]);
    int breadth = end - st;

    int cal = length * breadth;
    if (cal > ans) {
      std::swap(cal, ans);
    }
    if (height[st] < height[end]) {
      st++;
    } else {
      end--;
    }
  }
  return ans;
}
int main() {

  int n;
  std::cout << "Number of heights";
  std::cin >> n;

  std::vector<int> height(n);
  std::cout << "Enter the heights";

  for (auto &val : height) {
    std::cin >> val;
  }

  int ans = maxArea(height);
  std::cout << ans << std::endl;
  return 0;
}
