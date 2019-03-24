#include <stdio.h>
int factorial(int uno);
int main(){
    int a, b;
printf("Introduce el número del cual quieres saber su factorial: ");
scanf ("%i" , &a);
b = factorial(a);
printf("El resultado del factorial es: %i \n" , b);
}
int factorial(int uno){
    int i, result;
    i = uno;
    result = 1;
    do{
        result = result * i;
        i--;
    }
    while (i>0);
    return result;
}

