#include <stdio.h>

int main() {
   int i;
   for (i = 0; i < 30; i++) {
       if (i % 2 == 1) {
          printf("%d is odd.\n", i);
       }
   }
}
 