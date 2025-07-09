#include <iostream>
using namespace std;

int main(){
int numero;

cout<<"Insira o número desejado: "<<endl;
cin>>numero;
    if (numero>10 or numero<0){
        cout<<"Número inválido. Insira um entre 1 e 10."<<endl;
        return 0;
    }
    cout<<"Tabuada do "<<numero<<":"<<endl;
    for(int i =1; i<=10;i++){
        cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
    }

    return 0;
}