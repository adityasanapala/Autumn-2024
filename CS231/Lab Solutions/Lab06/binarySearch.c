#include <stdio.h>

int binarySearch(int *A, int len, int start, int end, int val) {
  if (start >= end) {
    return -1;
  }

  int mid = start + (end - start) / 2;

  if (A[mid] == val) {
    return mid;
  }
  if (val < A[mid]) {
    return binarySearch(A, len, start, mid, val);
  }

  return binarySearch(A, len, mid + 1,  end, val);
}

int main() {
  int A[] = {1, 3, 4, 6, 7, 8, 10};
  int len = sizeof(A) / sizeof(A[0]);
  int val = 7;
  int result = binarySearch(A, len, 0, len, val);

  printf("%d", result);
  
  return 0;
}
