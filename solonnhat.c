#include <stdio.h>

int numberMax(int n) {
  int max = 0;
  while (n > 0) {
    int temp = n % 10;
    n /= 10;
    if (temp > max) {
      max = temp;
    }
  }
  return max;
}

int main() {
  int n;
  printf("Nhap vao so nguyen n: ");
  scanf("%d", &n);
  printf("Chu so lon nhat trong %d la: %d\n",n, numberMax(n));
  return 0;
}
