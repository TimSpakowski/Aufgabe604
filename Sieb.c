#include<stdio.h>

int main() {
  int prim[300000];
  int i, j;
  
  for (i = 2; i <= 300000; i++) {
    prim[i] = 1;
  }
  
  for (i = 2; i <= 300000; i++) {
    if (prim[i] == 1) {
      for (j = 2; i*j <= 300000; j++) {
        prim[i*j] = 0;
      }
    }
  }
  
  for (i = 2; i<= 300000; i++) {
    if (prim[i] == 1) {
      printf("%d ", i);
    }
  }
  
  printf("\n\n");
  
  return 0;
  
}
