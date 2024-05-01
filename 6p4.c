#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int n1, n2, n3, maior=0, menor=0;

   // entradas
    printf ("Primeiro número: ");
    scanf ("%i", &n1);
    printf ("Segundo número: ");
    scanf ("%i", &n2);
    printf ("Terceiro número: ");
    scanf ("%i", &n3);

   //process
    if(n1 < n2){
        if(n1 < n3)
            menor = n1;
                else
                    menor = n3;}

        else{
            if(n2 < n3)
                menor = n2;
                    else
                        menor = n3;}

    if(n1 > n2){
        if(n1 > n3)
            maior = n1;
                else
                    maior = n3;}
        else{
            if(n2 > n3)
                maior = n2;
                    else
                        maior = n3;}

//saida
printf ("Maior: %i, menor: %i.", maior, menor);
}
