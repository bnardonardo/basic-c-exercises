#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    int idade;

   // entradas
    printf ("Qual a idade do nadador?");
    scanf ("%i", &idade);

   //process
   if (idade >= 5 && idade <= 8){
    printf ("Infantil A");}

    else if (idade >= 9 && idade <= 11){
        printf ("Infantil B");}

        else if (idade >= 12 && idade <= 14){
        printf ("Juvenil A");}

        else if (idade >= 15 && idade <= 17){
        printf ("Juvenil B");}

        else if (idade >= 18 && idade <= 60){
        printf ("Adulto");}

        else if (idade < 60){
        printf ("Sênior");}


   // saida

}
