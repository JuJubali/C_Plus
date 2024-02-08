#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <int> livros;
    int tam = 10;
    queue int::iterator it; 

    it = livros.begin;
    advance (it, 5); // Cinco é a distância
    
    livros.insert(it, 0); //iterator_position. Zero é o valor inserido

    // Ou sejam na posição 5 (advance) será inserido (insert) o valor 0

    for(int i = 0; i < tam; i++){
        livros.push(i); //Inserir elemento pela frente
        //Enquanto o tamanho da lista for < 10, o valor de i será inserido na frente
    }

    cout << "Quantidade de livros é de: " << livros.size() << "\n";

    tam = livros.size();
    for(int i = 0; i < tam; i++){
        livros.front();
        cout << "O primeiro livro da lista é: " << livros.front() << "\n";
        livros.pop();
    }

    cout << "A quantidade atual de livros é de: " << livros.size() << "\n";

    return 0;
}