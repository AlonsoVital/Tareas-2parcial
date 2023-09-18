#include <stdio.h>

int main() 
{
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    sum += i * i;
  }
  printf("La suma de los cuadrados de los primeros 100 numeros enteros es: %d", sum);
  return 0;
}
