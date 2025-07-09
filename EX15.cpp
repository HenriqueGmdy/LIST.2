#include <iostream>
using namespace std;

int main(){
    int base, expoente = 0;
    int resultado = 1;
    
cout<<"Insira a base:"<<endl;
cin>>base;
cout<<"Insira o expoente:"<<endl;
cin>>expoente;

for(int i=1;i<=expoente;i++){
    resultado = resultado*base;
}
    cout<< resultado;
    return 0;
}