#include <iostream>
using namespace std;

int main(){
    
    int um=1, dois=2, tres=3, quatro=4, cinco=5;
    int soma=um+dois+tres+quatro+cinco;
    int subtracao=cinco-quatro-tres-dois-um;
    int equacao=(um+dois+tres+quatro+cinco)-10;
    int multiplicacao=um*dois*tres*quatro*cinco;
    int divisao=cinco/um;
    int res=cinco%um;

    cout << "Soma das variáveis: " << soma << "\n\n";
    cout << "Subtração das variáveis: " << subtracao << "\n\n";
    cout << "A equação das variáveis: " << equacao << "\n\n";
    cout << "A multiplicação das variáveis: " << multiplicacao << "\n\n";
    cout << "A divisão das variáveis cinco e um: " << divisao << "\n\n";
    cout << "O resto da divisão entre cinco e um: " << res << "\n\n";

    return 0;
}