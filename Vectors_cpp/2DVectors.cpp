#include <iostream>
#include <vector>

int main() {

  int row, col;
  std::cin >> row >> col;
  std::vector<std::vector<int>> matrix(row, std::vector<int>(col));

  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      int ip;
      std::cin >> ip;
      matrix[i].push_back(ip);
    }
  }
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      std::cout << matrix[i][j];
    }
  }

  return 0;
}
