#include <iostream>

int Power(int x, int n) {
  if (n == 0)
    return 1;
  int powerHalfed = Power(x, n / 2);
  if (n % 2 == 0)
    return powerHalfed * powerHalfed;
  else
    return x * powerHalfed * powerHalfed;
}

int main() {
  std::cout << Power(4, 5);

  return 0;
}
