#include <iostream>
#include <vector>

bool Sorted(int a[], int n, int i) {

  if (i >= n - 1)
    return true;
  if (a[i] > a[i + 1])
    return false;
  return Sorted(a, n, i + 1);
}

int main() {
  std::cout << "Enter no. of elements:";
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  std::cout << "enter elements:";
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  std::cout << Sorted(a.data(), n, 0) << std::endl;
  return 0;
}
