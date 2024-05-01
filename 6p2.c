#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    float n1, n2, med, dif, prod, div;
    int op;

   // entradas
    printf ("Digite o primeiro número: ");
    scanf ("%f", &n1);
    printf ("Digite o segundo número: ");
    scanf ("%f", &n2);
    printf ("Qual operação deseja fazer? ");
    scanf ("%i", &op);

   //process
    switch (op)
    {
    case 1 :
        med = (n1 + n2)/2;
        printf ("%f", med);
    break;

    case 2 :
        if (n1 < n2){
            dif = (n2 - n1);
            printf ("%f", dif);
            }
            else{
                dif = (n1 - n2);
                printf ("%f", dif);
            }
    break;

    case 3 :
        prod = (n1 * n2);
        printf ("%f", prod);
    break;

    case 4 :
        div = (n1 / n2);
        printf ("%f", div);
    break;

    default :
        printf ("Escolha inexistente.");
    break;

    }
   // saida

}
