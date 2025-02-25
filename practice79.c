#include <stdio.h>

int main() {
  int size = 5,A=65;

  // creating pyramid
  for (int i = 0; i < size; i++) {
    // print spaces before stars
    for (int j = 0; j < size-i; j++) {
      printf(" ");
    }
    // print stars
    for (int k = 0; k < 2*i+1; k++) {
      printf("%d",k);
    }
    printf("\n");
  }
  return 0;
}