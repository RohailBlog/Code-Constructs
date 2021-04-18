int main() {
   int i;
   int product = 1;
   int sub = 0;
   for (i = 0; i < 50; i++) {
      product *= i;
      sub = product - i;
   } 
   return sub;
}