#include <iostream>
#include <vector>

void mergeSort(int a[], int st, int end);
void merge(int a[], int mid, int st, int end);
int main() {
  std::cout << "Enter number of elements:";
  int n;
  std::cin >> n;
  int a[n];
  std::cout << "Enter elements:";
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  mergeSort(a, 0, n - 1);
  std::cout << "Sorted array: ";
  for (int x : a) {
    std::cout << x << " ";
  }
  std::cout << "\n";
  return 0;
}
void mergeSort(int a[], int st, int end) {
  if (st < end) {
    int mid = st + (end - st) / 2;
    mergeSort(a, st, mid);
    mergeSort(a, mid + 1, end);
    merge(a, mid, st, end);
  }
}
void merge(int a[], int mid, int st, int end) {
  std::vector<int> temp;
  int i = st, j = mid + 1;
  while (i <= mid && j <= end) {
    if (a[i] < a[j])
      temp.push_back(a[i++]);
    else
      temp.push_back(a[j++]);
  }
  while (i <= mid)
    temp.push_back(a[i++]);
  while (j <= end)
    temp.push_back(a[j++]);
  for (int k = 0; k < temp.size(); k++)
    a[st + k] = temp[k];
}
