#include <stdio.h>

int main() {
  
   int array[16] = {3,222,5553,232,545,1,4,5,9,14,1123,132,313,114,165,166};
   int i;

   for (i = 0; i < 16; i++) {
      if (array[i] >= 100) {
         printf("The element at index %d is greater than 100 and equals %d.\n", i, array[i]);
      }
   }
}
