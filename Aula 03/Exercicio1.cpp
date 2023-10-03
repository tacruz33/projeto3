#include <iostream>
#include <string>

using namespace std;

class Animal {
       
     public:
        string nome;
        int idade;
        string fazerSom();
};

class Cachorro: public Animal{

    public:
     string som ="Au Au";
   
    void FazerSom(){
     cout << "O som do cachorro é : " << som << endl;
    }
};

int main() {

    Animal animais;
    Cachorro cachorro;

    cachorro.FazerSom();
    return 0;
}
