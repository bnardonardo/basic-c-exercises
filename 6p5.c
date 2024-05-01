#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n1, n2, n3;

   // entradas
    printf ("Primeiro número: ");
    scanf ("%i", &n1);
    printf ("Segundo número: ");
    scanf ("%i", &n2);
    printf ("Terceiro número: ");
    scanf ("%i", &n3);

   //process
  if (n1 <= n2 && n2 <= n3)
    {
      printf("A ordem crescente: %i, %i, %i. \n", n1, n2, n3);
    }
  else if (n1 <= n3 && n3 <= n2)
    {
      printf("A ordem crescente: %i, %i, %i. \n", n1, n3, n2);
    }
  else if (n2 <= n1 && n1 <= n3)
    {
      printf("A ordem crescente: %i, %i, %i. \n", n2, n1, n3);
    }
  else if (n2 <= n3 && n3 <= n1)
    {
      printf("A ordem crescente: %i, %i, %i. \n", n2, n3, n1);
    }
  else if (n3 <= n1 && n1 <= n2)
    {
      printf("A ordem crescente: %i, %i, %i. \n", n3, n1, n2);
    }
  else
    {
      printf("A ordem crescente: %i, %i, %i. \n", n3, n2, n1);
    }
}
