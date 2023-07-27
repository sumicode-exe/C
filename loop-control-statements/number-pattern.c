#include <stdio.h>
#include <stdlib.h>

int pattern_value(int i, int j) {
  i = abs(i);
  j = abs(j);
  int max;
  max = (i > j) ? i : j;

  return ++max;
}

int main(void) {
  int n;
  int count = 0;
  scanf("%d", &n);

  for (int i = -(n - 1); i <= (n - 1); i++) {
    for (int j = -(n - 1); j <= (n - 1); j++) {
      printf("%d ", pattern_value(i, j));
    }
    printf("\n");
    count++;
  }
}