#include <iostream>
#include <string>
#include <vector>

void rmvDup(std::string str, std::string ans, int i, bool map[26]) {

  if (i == str.size()) {
    std::cout << ans;
    return;
  }
  int idx = (int)(str[i] - 'a');
  if (map[idx])
    return rmvDup(str, ans, i + 1, map);
  else {
    map[idx] = true;
    return rmvDup(str, ans + str[i], i + 1, map);
  }
}

int main() {

  std::cout << "Enter the string";
  std::string s;

  std::cin >> s;
  std::string ans = "";
  bool map[26] = {false};
  rmvDup(s, ans, 0, map);
}
