#include <stdio.h>

// slt $t0, $t1, Command
// This assembly instruction can be translated in C code as below

int slt(int a, int b) {
  return a < b ? 1 : 0;
}

int slt_alt(int a, int b) {
  if (a < b) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int x = 5, y = 10;
  int result = slt(x, y);

  printf("%d", result);

  return 0;
}
