// Ramanujan number is the smallest number that can be expressed
// as sum of two cubes in two different ways. Write a program to print
// all such numbers up to a reasonable limit.

#include <stdio.h>
#include <math.h>

int main() {
  int limit = 2000; 
  int found = 0;

  printf("Ramanujan numbers up to %d are: ", limit);

  for (int n = 1; n <= limit; n++) {
    for (int a = 1; a <= cbrt(n); a++) {
      for (int b = a + 1; b <= cbrt(n); b++) {
        int c = cbrt(n - a * a * a);
        int d = cbrt(n - b * b * b);
        if (a * a * a + b * b * b == n && b * b * b + c * c * c == n && a != b && a != c && b != c) {
          printf("%d ", n);
          found = 1;
          break; 
        }
      }
    }
  }

  if (!found) {
    printf("No Ramanujan numbers found up to %d\n", limit);
  } else {
    printf("\n");
  }

  return 0;
}