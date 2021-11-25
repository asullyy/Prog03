#include<iostream>

using std::cout;
using std::cin;
//Criar um vector de ponteiros do tipo double no main e usar essa vector para algo


int main(){
    double vet[11]{0,1,2,3,4,5,6,7,8,9,10};
    double *ptvet = vet;

    for(int i=0; i<=11; i++){
        ptvet[i];
    }
    return 0;
}
