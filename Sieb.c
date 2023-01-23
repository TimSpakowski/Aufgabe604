#include<stdio.h>

int main() {
  int prim[3000000];
  int i, j;
  
  for (i = 2; i <= 3000000; i++) {
    prim[i] = 1;
  }
  
  for (i = 2; i <= 3000000; i++) {
    if (prim[i] == 1) {
      for (j = 2; i*j <= 3000000; j++) {
        prim[i*j] = 0;
      }
    }
  }
  
  for (i = 2; i<= 3000000; i++) {
    if (prim[i] == 1) {
      printf("%d ", i);
    }
  }
  
  printf("\n\n");
  
  return 0;
  
}
