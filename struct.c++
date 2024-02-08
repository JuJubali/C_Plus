#include <iostream>

using namespcae std;

struct Car {
    string nome;
    string cor;
    int ano;
    int valMax;

    void inserir (string nome, string cor, int ano, int velMax){
        nome = stnome;
        cor = stcor;
        ano = stano;
        velMax = stvelMax;
    }

    void show(){
        cout << "Nome: " << nome << "\n";
        cout << "Cor: " << cor << "\n";
        cout << "Ano: " << ano << "\n";
        cout << "Velocidade Maxima: " << velMax << "\n";
    }
}


int main(){
    Car car1, car2, car2, car3, car4, car5;

    carros [0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;

    carros[0].inserir("Relampago", "Vermelho", 2006, 300);
    carros[1].inserir("Mat", "laranja", 1999, 100);
    carros[2].inserir("Sally", "Azul", 2002, 260);
    carros[3].inserir("Chick", "Verde", 2006, 220);
    carros[4].inserir("Husdon", "Azul marinho", 1989, 150);

    for (int i=0; i<5; i++){
        carros[0].mostra();
        carros[1].mostra();
        carros[2].mostra();
        carros[3].mostra();
        carros[4].mostra();
    }

    return 0;
}