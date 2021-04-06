#include <stdio.h>

int main() {

   int i;
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   for (i = 0; i < 10; i++) {
      if (array[i] % 2 == 0) {
         printf("Value at index %d is even and equals %d.\n", i, array[i]);
      }
   }
}

  