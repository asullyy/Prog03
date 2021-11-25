#include <iostream>

using std::cout;
using std::cin;

// Criar uma função que manipula arrays e mostrar o uso dela com arrays
// Criar uma função que recebe um ponteiro como argumento 
// Criar uma função que manipula um vector

int mostrarTabuleiro(int tab[3][3]); 
int ocupandoPosicoes(int tab[3][3], int* linha, int* coluna, int jogador); //ponteiros
int verificando(int tab[3][3]);

int main()
{
    int fimJogo;
    int jogador = 0; 
    int tabuleiro[3][3] = {{0,0,0},{0,0,0},{0,0,0}}; 
    while (fimJogo != 1 and fimJogo != 2){
        for (int i = 1; i<3; i++){
            cout<<"JOGADOR "<<i<<"\n";
            int linha;
            int coluna;

            cout<<"Digite uma linha: ";

            cin>>linha;

            cout<<"Digite uma coluna: ";
            cin>>coluna;

            ocupandoPosicoes(tabuleiro, &linha, &coluna, i);
            mostrarTabuleiro(tabuleiro);
            fimJogo = verificando(tabuleiro);
        }
    } 
}

int mostrarTabuleiro(int tab[3][3]){
    for (int i=0; i<3; i++){ //percorrendo as linhas do tabuleiro
        for (int j=0; j<3; j++){ //percorrendo as colunas da linha
            cout<< "|"<<tab[i][j]<<"|";
        }
        cout<<"\n";
    }
}

int ocupandoPosicoes(int tab[3][3], int* linha, int* coluna, int jogador){
    tab[*linha][*coluna] = jogador;
}

int verificando(int tab[3][3]){
    //verificando linhas
    int aux1 = 0;
    int aux2 = 0;
    int ganhador = 0;
    bool aux;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (tab[i][j] == 1){
                aux1++;
            }
           
            if (tab[i][j] == 2){
                aux2++;
            }
            
        }
    }

    if (aux1 == 3){
        ganhador = 1;
    }
    
    if (aux2 == 3){
        ganhador = 2;
    }

    if (ganhador == 1){
        aux = 1;
        cout << "\nO jogador 1 venceu!\n";
    }
    if (ganhador == 2){
        aux = 2;
        cout << "\nO jogador 2 venceu!\n";
    }
    if (ganhador == 0){
        aux = 0;
    }

    return aux;
}