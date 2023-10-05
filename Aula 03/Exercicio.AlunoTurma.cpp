#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno {

    string nome;
    int NumeroIdentificar;

public:

    static int id;

    Aluno() {
        nome = "Tales";
        NumeroIdentificar = id;
        id++;
    }

    void detalhes() {
        cout << "O nome do aluno é: " << nome << endl;
        cout << "O numero da sua matricula é: " << NumeroIdentificar << endl;
    }

    static int getid(){
        return id;
    }
};
class Turma{




    
}
int Aluno::id = 1;

int main() {
    Aluno aluno1;
    aluno1.detalhes();

    Aluno aluno2;
    aluno2.detalhes();

    return 0;
}

