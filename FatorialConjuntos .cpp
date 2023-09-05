// Calculando a combinação simples e conjunto de elementos e peguntando ao usuário o que ele deseja saber.

#include <iostream>

using namespace std;

int fat (int n){
    int fatorial = 1;
    for (int i=1; i<=n ; i++)
        fatorial*=i;
    return fatorial;

    
    
}

void escolher ( int n ){
     int escolher;
     cout << " Voçê deseja calcular o Arranjo  ou Combinação simples";
     cout << " Voçê escolheu Arranjo ";
     cout << " Voçê escolheu Combinação simples ";
}
 
    
int main () {

    int n,a,p;
    cout << "Digite o total de itens : ";
    cin>>n;
    cout <<" Digite quantos serão tomados : ";
    cin>>p;

     // Calculo de arranjo
     if  fat(n) / fat(n-p) {
        cin>>fat;
      
     }  else a = fat(n) / (fat (p)*(fat(n-p)));
       
    
   
     // agora posso mostrar o fatorial
    cout << n << " Itens tomados " << p <<  a  << p << endl;
    cout << "Arranjo de " << a << " maneiras" << endl;

}
