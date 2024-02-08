#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char palavra[20], letra[1], secreta[50];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam=0;
    i=0;
    acertos=0;
    acerto=false;

    cout << "Digite a palavra: ";
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0'){  //\o -> Caracter do enter. Digita enter, add 0 após a palavra (flag). A string foi terminada
        i++; //Passar para a próxima posição
        tam++;
    }

    for(i = 0; i < 50; i++){
        secreta[i]='-';
    }

    while ((chances > 0) && (acertos < tam)) {
        cout << "Tentativas: " << chances << "\n\n";
        cout << "Palavra: " <<"\n";
        for (i = 0; i < tam; i++) {
            cout << secreta[i];
        }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        for (i = 0; i < tam; i++) {
            if (palavra[i] == letra[0]) {
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (!acerto) {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if (acertos == tam) {
    cout << "Vitoria" << "\n";
    } else {
    cout << "Derrota" << "\n" << "A palavra era: " << palavra <<"\n";
    }

    system("pause");

    return 0;
}
    
    