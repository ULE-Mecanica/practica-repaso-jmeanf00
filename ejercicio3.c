#include <stdio.h>

int main(){
int i, a;
i=2;
printf("Escribe su contraseña: ");
   scanf("%i" , &a);
   while (i>0){
     i--;
     if (a == 4567){
    printf("Bienvenido al sistema.\n");
    return 0;
   }
   else{
       if (a>4567){
          printf("La contraseña es incorrecta (mayor), introdúzcala de nuevo: ");
       scanf("%i", &a);
      }
      else{
       printf("La contraseña es incorrecta (menor), introdúzcala de nuevo: ");
       scanf("%i", &a);
      }
     }
    }
    if (a == 4567){
       printf("Bienvenido al sistema.\n");
    }
    else{
    if (a == 4567){
       printf("La contraseña es incorrecta (mayor), sistema bloqueado \n");
    }
    else{
        printf("La contraseña es incorrecta (menor), sistema bloqueado \n");
    }
   }
  return 0;
 }
