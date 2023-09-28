#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>


using namespace std;

void limpaTela() {
    for (int i=0;i<20;i++)
        cout << endl;
};

class Data{
    int dia, mes, ano;
    public:
    string geraString() {
        string dataStr = to_string(dia);
        dataStr.append("/");
        dataStr.append(to_string(mes));
        dataStr.append("/");
        dataStr.append(to_string(ano));
        return dataStr;
    }
    void setDia(int _dia) {
        dia = _dia;
    };
    void setMes(int _mes) {
        mes = _mes;
    };
    void setAno(int _ano) {
        ano = _ano;
    };
};

class paciente {
    string nome;
    Data dt_morte;
    public:
    static paciente leDados() {
        paciente novoPaciente;
        cout << "Dados de um novo paciente" << endl;
        cout << "Digite o nome: " << endl;
        string nome;
        getline(cin, nome);
        novoPaciente.setNome(nome);
        cout << "Digite a data: " << endl;
        int dia, mes, ano;
        cin >> dia >> mes >> ano;
        Data dtMorte;
        dtMorte.setDia(dia);
        dtMorte.setMes(mes);
        dtMorte.setAno(ano);
        novoPaciente.setDtMorte(dtMorte);
        return novoPaciente;
    }
    void listaDados() {
        cout << "Paciente: " << getNome() << endl;
        cout << "Falecido em " << getdtMorte().geraString();
    }
    void setNome(string _nome) {
        nome = _nome;
    }
    string getNome() {
        return nome;
    }

    void setDtMorte(Data _dataMorte) {
        dt_morte = _dataMorte;
    }

    Data getdtMorte() {
        return dt_morte;
    }
};

class mausoleu {
    int id;
    string localizacao;
    vector<paciente> pacientes;

    private:
    static int contador;

    public:

    mausoleu() {
        contador;
        id = contador;
    }

    static int getContador() {
        return contador++;
    }


    static mausoleu leNovo() {
        mausoleu novoMausoleu;
        cout << "Digite a localicacao do novo mausoleu: ";
        string loc;
        getline(cin, loc);
        novoMausoleu.setLocalizacao(loc);
        return novoMausoleu;
    }
    void listaDados() {
        cout << "Dados do mausoleu" << endl;
        cout << getLocalizacao() << endl;
        cout << "Lista de pacientes deste mausoleu: " << mausoleu::getContador() << endl;
        for (paciente p:pacientes) {
            //listar cada paciente
        }
    }
    void setLocalizacao(string _localizacao) {
        localizacao = _localizacao;
    }
    string getLocalizacao() {
        return localizacao;
    }

    void recepciona(paciente _paciente) {
        pacientes.push_back(_paciente);
    };

    void listaPacientes() {
        for (paciente p:pacientes) {
            cout << p.getNome() << endl;
        }
    }
};

int mausoleu::contador = 1;

int main() {
    vector<mausoleu> mausoleus;
    limpaTela();

    ifstream outMausoleus;

// Abrindo 0 arquivo para leitura
    outMausoleus.open("mausoleus.txt", ios_base::app);
    if (outMausoleus.is_open()) {
        string linha;
        while (outMausoleus.eof() == false) {
            getline(outMausoleus, linha);
            cout << linha << endl;
        }
        outMausoleus.close();
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }
    return 0;
    
    int op;
    do {
        cout << "Opcoes" << endl;
        cout << "1. Incluir Mausoleu" << endl;
        cout << "2. Listar Mausoleus" << endl;
        cout << "3. Recepcionar paciente" << endl;
        cout << "0. Sair" << endl;
        cout << "Digite opcao: ";
        cin >> op;
        cin.ignore();

        if (op==1) {
            mausoleu novo = mausoleu::leNovo();
            mausoleus.push_back(novo);
            
            ofstream outMausoleus;
            outMausoleus.open("mausoleus.txt", ios_base::app);
            if (outMausoleus.is_open()) {
                outMausoleus << novo.getContador() << endl;
                outMausoleus << novo.getLocalizacao() << endl;
                outMausoleus.close();
            }
        }

        if (op==2) {
            for (mausoleu m:mausoleus) {
                m.listaDados();
            }
        }
        if (op==3) {
            paciente novoPac = paciente::leDados();
            //localizar um mausoleu
            //inserir paciente no mausoleu
        }

    } while (op != 0);
    return 0;
}