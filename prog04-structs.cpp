#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

//Criar duas structs com cinco campos de tipos diferentes no main e manipular essas structs usando duas funções
//Criar um array de structs
//Manipular uma struct usando um ponteiro

void printAlunos (struct aluno cadAlunos[2]);

int main(){

    struct indetif{
        string nome;
        string escola;
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
        struct indetif alunos;
        struct mediasMaterias alunosmat;
    };

    struct aluno cadAlunos[2];


    cout << "Digite o nome do aluno 0: ";
    cin >> cadAlunos[0].alunos.nome;
    
}

void printAlunos(struct aluno cadAlunos[]) {
    cout << cadAlunos[0].alunos.nome;
}

