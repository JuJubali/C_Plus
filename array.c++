// Array/ Vetores: Coleção de variáveis de um mesmo tipo
// Tipo, nome e tamanho
// [Posições que armazenam dados de um mesmo tipo]

#include <iostream>

using namespace std;

int main (){

    int vetor [5];
    int i;

    vetor [0] = 10;
    vetor [1] = 20;
    vetor [2] = 30;
    vetor [3] = 40;
    vetor [4] = 50;
    //int tam = 5;
    //int vetor [10] = {10, 20, 30, 40, 50};

    cout << vetor [0] <<"\n";
    cout << vetor [1] <<"\n";
    cout << vetor [2] <<"\n";
    cout << vetor [3] <<"\n";
    cout << vetor [4] <<"\n";

    //for(i=5;i<tam: i++)
    for (i=5; i<10; i++){
        cout << vetor [0] <<"\n";
    }
 
    return 0;
}