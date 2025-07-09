
#include <iostream>
using namespace std;

int main(){
    
    int n;
    float numero, soma, media = 0;
    
    cout << "Quantos números você deseja?"<<endl;
    cin >> n;
    
    for (int i = 1; i<=n; i++){
        cout << "Digite o numero "<< i<< "."<<endl;
        cin>> numero;
        soma = soma +numero;
    }
    
    media = soma/n;
    cout << "Soma dos números: " << soma << endl;
    cout << "Média dos números: " << media << endl;
    
    return 0;
}