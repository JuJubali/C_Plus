#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> num;
    int tam, i;

    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);
    num.push_back(50);
    num[4]=55;

    num.insert(num.begin()+1, 100); //Parágrafo importante!
    num.insert(num.end()-1, 1000); //Parágrafo importante!
    num.erase(num.begin()); //Parágrafo importante!

    tam=num.size();

    cout << "O tamado do vetor e de: " << tam << endl;
    //Tamanho do vetor é a quantidade de elementos do vetor. num.push_back

    cout <<"O primeiro valor do vetor e: " << num.front() << endl;
    cout <<"O ultimo valor do vetor e: " << num.back() << endl <<"\n";

    cout <<"Os valores sao: ";
    for(i=0;i<tam;i++){
        cout<< num[i] << " ";
    }

    while (!num.empty())
    {
        num.pop_back(); //Não deu certo com front
    }

    cout << "Lista recente: " << num.size();
    
    return 0;
}
