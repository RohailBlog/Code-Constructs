#include <stdio.h>

int main() { 
    int array[] = {0, 3, 4, 5, 7, 8, 11, 33, 55, 33, 222, 55, 66664, 2};
    int i = 0;
 
    while (i < 14) { 
       printf("%d\n", array[i]);
       i++;
    }
}