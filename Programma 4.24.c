#include <stdio.h>

int main () {
   
   int a;
   
   printf("Inserisci un numero da 1 a 4: ");
   scanf ("%d", &a);
   
   if (a == 1) printf("Il numero e 1");
   if (a == 2) printf("Il numero e 2");
   if (a == 3) printf("Il numero e 3");
   if (a == 4) printf("Il numero e 4");
   if (a > 4) printf("Il numero %d maggiore di 4" , a);
   
   return 0;
   
   }
