// VALOR COM REFERENCIA (&);

#include <iostream>

using namespace std;

void creferencia (int &k){
    if (k>=10)
        k=k%10;
    cout << " Valor de k é : " << k;

}

int main (){
    int A;
    cout << "Digite um valor"<< endl;
    cin>> A;
    creferencia (A);
    cout << " E o novo valor : " << A;
}