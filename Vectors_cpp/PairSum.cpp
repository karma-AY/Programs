#include <iostream>
#include <vector>

using namespace std;

vector<int> PairSum(vector<int> ps, int target) {
  int st = 0;
  int end = ps.size() - 1;
  vector<int> res;
  while (st < end) {

    int sum = ps[st] + ps[end];
    if (target > sum)
      st++;
    else if (target < sum)
      end--;
    else {
      res.push_back(st);
      res.push_back(end);
      return res;
    }
  }
  return res;
}
int main() {
  int n;
  cout << "Enter number of elements:";
  cin >> n;
  vector<int> arr;
  cout << "Enter the elements:";
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    arr.push_back(input);
  }
  cout << "Enter the target pair:";
  int tar;
  cin >> tar;
  vector<int> res = PairSum(arr, tar);
  for (int i = 0; i < res.size(); i++) {
    cout << res[i];
  }
  return 0;
}
