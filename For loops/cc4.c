int main() {
   int i;
   int product = 1;
   int add = 3;
   int solution = 0;
   
   for (i = 0; i < 30; i++) {
      product *= i;
      solution = add + product;
   } 
   return solution;
}