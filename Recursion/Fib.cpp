#include <iostream>

int Fib(int n) {
  if (n == 0 || n == 1)
    return n; // base case

  return Fib(n - 1) + Fib(n - 2); // As f(n) = f(n-1) + f(n-2)
}

int main() {
  std::cout << "Enter n:";
  int n;
  std::cin >> n;
  std::cout << Fib(n);

  return 0;
}
