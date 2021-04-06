/*This C code is one array and the sum of the elements is returned. */

int main() {

   int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i;
   int sum;

   for(i = 0; i < 12; i++) {
      sum += array[i];
   }
   return sum;
} 