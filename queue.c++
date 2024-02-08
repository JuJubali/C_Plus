#include <iostream>
#include <queue>

using namepace std;

int main(){

    queue<string> cartas;
    /* queue <string> baralho, dados, cartas;
     creiar mais de uma lista ao mesmo tempo*/ 

    cartas.push ("Rei de Copas");
    cartas.push ("Rei de Outros");
    cartas.push ("Reis de Paus");
    cartas.push("Reis de Espadas");

    cout << "Tamnho da fila: " << cartas.size << "\n";
    cout << "Primeira carta: " << cartas.front << "\n";
    cout << "Ultima carta: " << cartas.back << "\n";


    while(!cartas.empty){
        cout << "A carta da frente é: " << cartas.front << "\n";
        cartas.pop();
    }

    return 0;
}