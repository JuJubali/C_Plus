#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

    int num1, num2, num3;
    num1 = 1;
    num2 = 2;
    num3 = 3;
    char nome[10]="Juh";

    /*printf("Os valores das variaveis sao: %d, %d e %d\n",num1, num2, num3);
    printf("O nome e: %s",nome);*/

    printf("Digite o seu nome: \n");
    scanf("%s",&nome);
    printf("Digite tres numeros: \n");
    scanf("%d %d %d",&num1, &num2, &num3); //qualquer coisa fora da referência não é visto

    return 0;
}           