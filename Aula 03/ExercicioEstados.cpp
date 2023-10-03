#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estados {
private: 
    string nome;
    string uf;

public:
    Estados(string n, string u) : nome(n), uf(u) {}

    string getNome(){
        return nome;
    }

    string getUf(){
        return uf;
    }
};

class Cidades {
private:
    Estados* estado;
    vector<Estados> estados;

public:
    string nome;
    string cidade;

    Cidades(string n, string c) : nome(n), cidade(c), estado(nullptr) {}

    string getNome(){
        return nome;
    }

    string getUf(){
        // Retorna a UF do primeiro estado associado à cidade, se houver algum estado associado.
        if (!estados.empty()) {
            return estados[0].getUf();
        }
        return "N/A";
    }

    void novoEstado(const Estados& novoestado){
        estados.push_back(novoestado);
    }
};

int main() {
    Estados estado1("Bahia", "BA");
    Cidades cidade1("Ilhéus", "Interior");

    cidade1.novoEstado(estado1);

    cout << "Cidade: " << cidade1.getNome() << endl;
    cout << "UF: " << cidade1.getUf() << endl;

    return 0;
}
