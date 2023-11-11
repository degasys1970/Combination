#include <iostream>
// factorial 
int factorial(int n) {
  if (n == 0) { 
    return 1;
  }
  return n * factorial(n - 1);
}
// combination
int combination(int n, int r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}


int main() {
  int n,r,x ;
  std::cin >> n;
  std::cin >> r;
  x = combination(n, r);
    std::cout << n  << " számból " <<  r << " -et " << x << " féleképpen lehet kiválasztani ! "<< std::endl;
}
