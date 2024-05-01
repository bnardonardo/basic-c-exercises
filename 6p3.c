#include <stdio.h>
#include <locale.h>
int main (){
    // p´recisei pesquisar comando que forçasse a parada
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


if (op == 1){
    med = (n1 + n2)/2;
    printf ("A média é:  %f\n", med);
    return (0);}

        if (op == 2){
            if (n1 < n2){
            dif = (n2 - n1);
            printf ("A diferença do maior para o menor é: %f\n", dif);
            return (0);}

            if (n2 < n1) {
            dif = (n1 - n2);
            printf ("A diferença do maior para o menor é: %f \n", dif);
            return (0);}
            return (0);}

                if (op == 3){
                prod = (n1 * n2);
                printf ("O produto é: %f\n", prod);
                return (0);}

                    if (op == 4){
                        div = (n1 / n2);
                        printf ("A divisão : %f", div);
                        return (0);}

                            if (op != 1, 2, 3, 4){
                                printf ("Escolha inexistente.\n");
                                return (0);}
   // saida

system("pause");
    return 0;
}

