// mostra a combinação simples

#include <iostream>

using namespace std;

int fat (int n){
    int fatorial = 1;
    for (int i=1; i<=n ; i++)
        fatorial*=i;
    return fatorial;
    
}
int main () {
    int n,a,p;
    cout << "Digite o total de itens : ";
    cin>>n;
    cout <<" Digite quantos serão tomados : ";
    cin>>p;
     // Calculo de arranjo
     a = fat(n)/(fat (p)*(fat(n-p)));
     // agora posso mostrar o fatorial
    cout << n << " Itens tomados " << p <<  a  << p << endl;
    cout << "Arranjo de " << a << " maneiras" << endl;

}
