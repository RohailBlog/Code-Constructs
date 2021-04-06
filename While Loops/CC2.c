#include <stdio.h>

int main() {
    int x = 0; 

    while (x < 101) {
       if (x % 2 == 1) { 
          printf("%d\n", x);
       }   
       x++;
    }
}