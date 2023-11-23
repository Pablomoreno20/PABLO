#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }

  int anterior = 0;
  int actual = 1;

  for (int i = 2; i <= n; i++)
  {
    int newactual = anterior + actual;
    anterior = actual;
    actual = newactual;

    if (newactual > n)
    {
      return n;
    }
  }

  return actual;
}

int main()
{
  int n;

  srand(time(NULL));

  n = rand() % 1000000;

  printf("Calculando las secuencias fibonacci\n");

  for (int i = 0; i < n; i++)
  {
    int secuencia = i + 1;
    int numero = fibonacci(i);

    printf("Secuencia %d: %d\n", secuencia, numero);
  }

  return 0;
}
