#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dependente {
private:
    string cpf;
    string nome;
    int idade;

public:
    // Métodos de inicialização e acesso para membros
};

class Cliente {
private:
    string cpf;
    string nome;
    int idade;

public:
    // Métodos de inicialização e acesso para membros
    Cliente(string _cpf, string _nome, int _idade);
    void setCpf(string _cpf);
    string getCpf();
    void setNome(string _nome);
    string getNome();
    void setIdade(int _idade);
    int getIdade();  // Corrigido para retornar int
};

// Implementação dos métodos da classe Cliente
Cliente::Cliente(string _cpf, string _nome, int _idade) {
    cpf = _cpf;
    nome = _nome;
    idade = _idade;
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

int main() {
    // Criação de um objeto Cliente
    Cliente cliente("123456789", "Fulano", 30);

    // Exemplo de uso dos métodos
    cout << "CPF: " << cliente.getCpf() << endl;
    cout << "Nome: " << cliente.getNome() << endl;
    cout << "Idade: " << cliente.getIdade() << " anos" << endl;

    return 0;
}
