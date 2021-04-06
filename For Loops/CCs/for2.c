#include <stdio.h>

int main() { 

   int array[5] = {1, 2, 3, 4, 5};
   int sum = 0; 
   int i;

   for (i = 0; i < 5; i++) {
      sum += array[i];
   }
   printf("sum is %d\n", sum);
}
