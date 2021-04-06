typedef struct {
   int x;
   int y; 
} xy;

int main() {
   xy z;
   z.x = 3;
   z.y = 4;
   
   int product = z.x * z.y;
   
   return product;
}