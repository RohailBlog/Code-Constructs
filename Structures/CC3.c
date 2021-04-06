typedef struct {
   char * x;
   int y;
   char * z;
   int a;
} charint;

int main() {
   charint Rohail;
   Rohail.x = "X";
   Rohail.y = 23;
   Rohail.z = "Z";
   Rohail.a = 1;

   return Rohail.a;
}