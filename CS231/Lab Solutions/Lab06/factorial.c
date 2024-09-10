#include <stdio.h>

int fac(int x) {
  if (x == 0) {
    return 1;
  }
  return x * fac(x - 1);
}

int main() {
  int x = 5;
  printf("%d", fac(x));

  return 0;
}
