/* Switch case and a return */ 

int main() {
   int x = 3;
   int i = 30; 
  
   switch(x) {
      case '1':
         return x;
         break;
      case '2':
         return i;
         break;
      default:
         return i;
      }
}