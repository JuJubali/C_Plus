#include <iostream>
using namespace std;

/// @brief 
/// @return 
int main() {

    int val;

    cout << "Selecione uma cor: \n";
    cout << "[1] Verde [2]Vermelho [3]Azul [4]Rosa [5]Violeta \n";

    cin >> val;

    switch (val){
        case 1:
            cout <<"Cor selecionada: Verde\n";
            break;
        case 2:
            cout <<"Cor selecionada: Vermelho\n";
            break;
        case 3:
            cout <<"Cor selecionada: Azul\n";
            break;
        case 4: 
            cout <<"Cor selecionada: Rosa";
            break;
        case 5:
            cout <<"Cor selecionada: Violeta";
            break;
        default:
            cout <<"Cor inválida\n";
    }

    cout << "\nPrograma finalizado\n";

    return 0;
}