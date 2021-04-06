#include <stdio.h>

int main() {
   
   int i; 
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
   for (i = 0; i < 10; i++) {
      if (array[i] % 2 == 1) {
         printf("The value at index %d equals %d and is odd.\n",i, array[i]);
      }
   }
}