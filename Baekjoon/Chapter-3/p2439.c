#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  for (int i = 0; i < a; i++) {
    for (int j = 0; j < (a - 1) - i; j++) {
      printf(" ");
    }
    for (int k = 0; k < i + 1; k++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}