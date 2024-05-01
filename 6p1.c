#include <stdio.h>
#include <locale.h>
int main (){

    //definindo idioma
    setlocale(LC_ALL, "Portuguese");

   // var
    float h, ideal=0.0;
    char sexo;
   // entradas
    printf("Qual a sua altura (com ponto): ");
    scanf("%f",&h);

    printf("Qual o seu sexo (M) para Masculino e (F) para Feminino): ");
    fflush(stdin);
    scanf("%c",&sexo);

    //process
    if(sexo == 'M')
    {
        ideal+=((72.7*h)-58);
        printf("O seu peso ideal é: %f\n",ideal);
    }
    else
    {
        ideal=((62.1*h)-44.7);
        printf("O seu peso ideal e: %f\n",ideal);
    }

    system("pause");
    return 0;
}
