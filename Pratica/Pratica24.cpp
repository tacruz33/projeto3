#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dependente {
private:
    string id;
    string cpf;
    string nome;
    int idade;

public:

    void setId(string _id);
        string getId();
    void setCpf(string _cpf);
        string getCpf();
    void setNome(string _nome);
        string getNome();
    void setIdade(int _idade);
        int getIdade(); 
    
};
       
void Dependente::setId(string _id) {
    id = _id;
}

string Dependente::getId() {
    return id;
}

void Dependente::setCpf(string _cpf) {
    cpf = _cpf;
}

string Dependente::getCpf() {
    return cpf;
}

void Dependente::setNome(string _nome) {
    nome = _nome;
}

string Dependente::getNome() {
    return nome;
}

void Dependente::setIdade(int _idade) {
    idade = _idade;
}

int Dependente::getIdade() {
    return idade;
}
void listarDados() {
        cout << "Id: " << getId << endl;
        cout << "Cpf " << cpf << endl;
        cout << "Nome " << nome << endl;
        cout << "Idade " << idade << endl;

}


class Cliente {

vector <Dependente> dependentes;

private:
    string id;
    string cpf;
    string nome;
    int idade;

public:
   
    Cliente(string _id, string _cpf, string _nome, int _idade);

    void setId(string _id);
    string getId();
    void setCpf(string _cpf);
    string getCpf();
    void setNome(string _nome);
    string getNome();
    void setIdade(int _idade);
    int getIdade();  
};

Cliente::Cliente(string _id, string _cpf, string _nome, int _idade) {
    id = _id;
    cpf = _cpf;
    nome = _nome;
    idade = _idade;
}

void Cliente::setId(string _id) {
    id = _id;
}

string Cliente::getId() {
    return id;
}

void Cliente::setCpf(string _cpf) {
    cpf = _cpf;
}

string Cliente::getCpf() {
    return cpf;
}

void Cliente::setNome(string _nome) {
    nome = _nome;
}

string Cliente::getNome() {
    return nome;
}

void Cliente::setIdade(int _idade) {
    idade = _idade;
}

int Cliente::getIdade() {
    return idade;
}

 void listarDados() {

        cout << "Id: " << getId() << endl;
        string id;
        cout << "Cpf " << getCpf() << endl;
        string cpf;
        cout << "Nome " << getNome() << endl;
        string nome;
        cout << "Idade " << getIdade << endl;
        
        int idade;
int main() {
  
    Cliente cliente("22", "123456789", "Tales", 27);
    Dependente dependentes;
    
   
    // Exemplo de uso dos métodos
    cout << "CPF: " << cliente.getCpf() << endl;
    cout << "Nome: " << cliente.getNome() << endl;
    cout << "Idade: " << cliente.getIdade() << " anos" << endl;

    cliente.listarDados(); // Chama a função listaDados() da classe Cliente
    Dependente.listarDados(); // Chama a função listaDados() da classe Dependente

    return 0;
    return 0;
}
