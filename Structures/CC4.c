typedef struct {
   int a; 
   int b; 
   int c;
} ints;

int main() {
   ints Rohail;
   Rohail.a = 2;
   Rohail.b = 3;
   Rohail.c = 4;

   int x = Rohail.c - Rohail.a;
   
   return x;
}