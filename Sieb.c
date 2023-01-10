#include<stdio.h>

int main() {
  int prim[300];
  int i, j;
  
  for (i = 2; i <= 300; i++) {
    prim[i] = 1;
  }
  
  for (i = 2; i <= 300; i++) {
    if (prim[i] == 1) {
      for (j = 2; i*j <= 300; j++) {
        prim[i*j] = 0;
      }
    }
  }
  
  for (i = 2; i<= 300; i++) {
    if (prim[i] == 1) {
      printf("%d ", i);
    }
  }
  
  printf("\n\n");
  
  return 0;
  
}
