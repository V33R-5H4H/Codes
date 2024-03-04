//WAP to add/remove item from a list using realloc.
#include <stdio.h>
#include <stdlib.h>
int main() {
  // Initialize a pointer to the start of the list, and set the initial size of the list to 1.
  int *list = malloc(1 * sizeof(int));
  int size = 1;
  int capacity = 1;

  // Add items to the list
  for (int i = 0; i < 10; i++) {
    // If the list is full, use realloc to increase the size of the list
    if (i == capacity) {
      capacity *= 2;
      list = realloc(list, capacity * sizeof(int));
    }

    // Add the next item to the list
    list[i] = i;
  }

  // Print the list to verify that it was added correctly
  for (int i = 0; i < 10; i++) {
    printf("%d ", list[i]);
  }

  // Free the memory allocated by realloc
  free(list);

  return 0;
}