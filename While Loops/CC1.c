#include <stdio.h>

int main() {
    int x = 0; 

    while (x < 11) {
       if (x % 2 == 0) { 
          printf("%d\n", x);
       }   
       x++;
    }
}