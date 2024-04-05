//WAP to add/remove item from a list using realloc.
#include <stdio.h>
#include <stdlib.h>
void main() {
  int *list = malloc(1 * sizeof(int));
  int size = 1;
  int capacity = 1;
  for (int i = 0; i < 10; i++) {
  if (i == capacity) {
      capacity *= 2;
      list = realloc(list, capacity * sizeof(int));
    }
    list[i] = i;
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", list[i]);
  }
  free(list);
}