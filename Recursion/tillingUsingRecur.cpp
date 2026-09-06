#include <iostream>

int tilling(int n) {

  if (n == 0 || n == 1)
    return 1;

  int vertical = tilling(n - 1);   //[2,n-1]
  int horizontal = tilling(n - 2); //[2,n-2]

  return vertical + horizontal;
}
int main() {

  int n;
  std::cin >> n;

  std::cout << tilling(n);
  return 0;
}
