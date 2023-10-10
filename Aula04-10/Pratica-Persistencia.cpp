#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Usuario
{
private:
    string cpf;
    string nome;
    string endereco;
    string telefone;

public:
    static Usuario incluidados()
    {
        Usuario novousuario;

        cout << "Inclua seus dados :" << endl;

        cout << "Digite o seu CPF: ";
        cin.ignore();
        getline(cin, novousuario.cpf);
>
        cout << "Digite o nome: ";
        getline(cin, novousuario.nome);

        cout << "Digite o seu endereço: ";
        getline(cin, novousuario.endereco);

        cout << "Digite o seu telefone: ";
        getline(cin, novousuario.telefone);

        return novousuario;
    }

    void listardados()
    {
        cout << endl;
        cout << "------Dados do Usuário------ :" << endl;
        cout << "CPF: " << getCpf() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Endereço: " << getEndereco() << endl;
        cout << "Telefone: " << getTelefone() << endl;
    }

    string getCpf()
    {
        return cpf;
    }

    string getNome()
    {
        return nome;
    }

    string getEndereco()
    {
        return endereco;
    }

    string getTelefone()
    {
        return telefone;
    }

    void ExcluirUsuario(vector<Usuario> &usuarios, string cpf)
    {
        for (size_t i = 0; i < usuarios.size(); ++i)
        {
            if (usuarios[i].getCpf() == cpf)
            {
                usuarios.erase(usuarios.begin() + i);
                cout << "Cliente com CPF " << cpf << " foi excluído." << endl;
                return;
            }
        }
        cout << "Cliente com CPF " << cpf << " não foi encontrado." << endl;
    }
};
void Menu()
{
    cout << "---------- Menu -------------" << endl;
    cout << "Escolha uma opção abaixo" << endl;
    cout << "1. Incluir " << endl;
    cout << "2. Excluir " << endl;
    cout << "3. Alterar " << endl;
    cout << "4. Listar  " << endl;
    cout << "5. Localizar " << endl;
    cout << "0. Sair " << endl;
}


int main()
{
    vector<Usuario> usuarios;
    int escolha;
    bool sair = false;

    while (!sair)
    {
        Menu();
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha)
        {
            case 1:
            {
                Usuario novousuario = Usuario::incluidados();
                usuarios.push_back(novousuario);

                ofstream outUsuario;
                outUsuario.open("Usuario.txt", ios_base::app);
                if (outUsuario.is_open())
                {
                    outUsuario << novousuario.getCpf() << endl;
                    outUsuario << novousuario.getNome() << endl;
                    outUsuario << novousuario.getEndereco() << endl;
                    outUsuario << novousuario.getTelefone() << endl;
                    outUsuario.close();
                }
                break;
            }
            // case 2:
            // {
            //     string excluircpf;
            //     cout << "Digite o CPF que será excluído: ";
            //     cin.ignore();
            //     getline(cin, excluircpf);
            //     if (excluircpf.size() == 11)
            //     {
            //         ExcluirUsuario(usuarios, excluircpf);
            //     }
            //     else
            //     {
            //         cout << "CPF inválido. Deve ter 11 dígitos." << endl;
            //     }
            //     break;
            }
            case 3:
            
               
                break;
            case 4:
            {
                cout << endl;
                for (Usuario u : usuarios)
                {
                    u.listardados();
                }

                string linha;
                ifstream abrirusuario("Usuario.txt");
                if (abrirusuario.is_open())
                {
                    while (getline(abrirusuario, linha))
                    {
                        cout << linha << endl;
                    }
                    abrirusuario.close();
                }
                else
                {
                    cout << "Não foi possível abrir o arquivo.";
                }
                break;
            }
            case 0:
                sair = true;
                break;      
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }

    return 0;
}
