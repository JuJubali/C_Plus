// [linha] [coluna]

#include <iostream>

using namespace std;

int main(){

    int matriz [3][3];
    int l, c;

    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [0][2] = 3;
    matriz [0][3] = 4;

    matriz [1][0] = 5;
    matriz [1][1] = 6;
    matriz [1][2] = 7;
    matriz [1][3] = 8;

    matriz [2][0] = 9;
    matriz [2][1] = 10;
    matriz [2][2] = 11;
    matriz [2][3] = 12;

    matriz [3][0] = 14;
    matriz [3][1] = 15;
    matriz [3][2] = 16;
    matriz [3][3] = 17;

    for(l=0; l<3; l++){
        for(c=0; c<3, c++){
            cout << matriz [l][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}