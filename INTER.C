#include <stdio.h>

int main(void) {
  int n1, n2, a[100], b[100];
  printf("enter the size of set\n");
  scanf("%d", &n1);
  printf("enter the size of set\n");
  scanf("%d", &n2);
  printf("enter the size of set a\n");
  for (int i = 0; i < n1; i++) {
    scanf("%d", &a[i]);
  }
  printf("enter the size of set b\n");
  for (int j = 0; j < n2; j++) {
    scanf("%d", &b[j]);
  }

  int p[100]; int h=0;
  for (int k = 0; k < n1; k++) {
    for (int g = 0; g < n2; g++) {
      if (a[k] == b[g]) {
        p[h] = a[k];
        h++;
      }
    }
  }
  printf("result\n");
  for (int v = 0; v < h; v++) {
    printf("%d, ", p[v]);
  }
}