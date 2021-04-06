/*This C code contains two arrays and the sum of all of the elements is returned. */
#include <stdio.h>

int main() {

   int array[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int array1[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
   int i;
   int sum = 0;

   for(i = 0; i < 11; i++) {
      sum += array[i];
   }

   for(i = 0; i < 10; i++) {
      sum += array1[i];
   }
   
   return sum;
}
