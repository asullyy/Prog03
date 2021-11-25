#include<iostream>

using std::cout;
using std::cin;

//Criar duas structs com cinco campos de tipos diferentes no main e manipular essas structs usando duas funções
//Criar um array de structs
//Manipular uma struct usando um ponteiro

int medias();

int main(){

    struct indetif{
        char nome;
        char escola;
        int idade;
        int serie;
        int numMaterias;
    }; 

    struct mediasMaterias{
        int portugues;
        int matematica;
        int bilogia;
        int quimica;
        int fisica;
    };

    struct aluno{
        struct indetif alunos{
            char nome;
            char escola;
            int idade;
            int serie;
            int numMaterias;
        };

        struct mediasMaterias alunosmat{
            int portugues;
            int matematica;
            int bilogia;
            int quimica;
            int fisica;
        };
    };

    struct aluno cadAlunos[2];

    for(int i=0; i=>2; i++){
        cout<<"Digite o nome do aluno "<<i;
        cin>> cadAlunos[i].alunos.nome;
        cout<<"Digite o nome da escola "<<i;
        cin>> cadAlunos[i].alunos.escola;
        cout<<"Digite a idade do aluno "<<i;
        cin>> cadAlunos[i].alunos.idade;
        cout<<"Digite a serie do aluno "<<i;
        cin>> cadAlunos[i].alunos.serie;
        cout<<"Digite o número de matérias "<<i;
        cin>> cadAlunos[i].alunos.numMaterias;
    }
};

int medias(){
    int notas = 0;
    int aux = 0;

    for(int i = 0; i<=4; i++){
        cout<< "Digite uma nota: ";
        cin>>aux;
        notas = notas + aux;
    };

    int media = notas/4;
    
    return media;
}
