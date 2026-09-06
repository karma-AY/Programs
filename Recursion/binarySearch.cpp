#include <iostream>

int BSrecursion(int a[], int high, int low, int target) {
  if (low > high)
    return -1;

  int mid = (low + high) / 2;

  if (a[mid] == target)
    return mid;
  else if (a[mid] > target)
    return BSrecursion(a, mid - 1, low, target);
  else
    return BSrecursion(a, high, mid + 1, target);

  return -1;
}

int main() {
  int n;
  std::cout << "Enter the number of elements";
  std::cin >> n;

  int a[n];
  std::cout << "Enter the elements of array:";
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  int target;
  std::cout << "Enter the number you want to find in array:";
  std::cin >> target;
  std::cout << BSrecursion(a, n - 1, 0, target);

  return 0;
}
