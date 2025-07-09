#include <iostream>
using namespace std;

int valoridade(){
    int idade = 0;
    
    cout<<"Informe a idade: "<<endl;
    cin>>idade;
    
    while(idade<0 or idade>150){
    cout << "Que porra de idade é essa?"<<endl;
    cout<<"Informe a idade: "<<endl;
    cin>>idade;
    }
    return idade;
}

float valorsal(){
    float salario = 0;
    
    cout<<"Informe o seu salário: "<<endl;
    cin>>salario;
    
    while(salario<0){
    cout << "Salário inválido. Insira novamente: "<<endl;
    cin>>salario;
    }
    return salario;
}

char estadocivil(){
    char opcao = '-';
    
    cout << "Informe seu estado civil\n";
    cout << "s - solteiro\n";
    cout << "c - casado\n";
    cout << "v - viuvo\n";
    cout << "d - divorciado\n";
    cin >> opcao;
    
    while (opcao != 's' && opcao != 'c' && opcao != 'v' && opcao != 'd') {
        cout << "Estado civil inválido. Tente novamente.\n";
        cout << "s - solteiro\n";
        cout << "c - casado\n";
        cout << "v - viuvo\n";
        cout << "d - divorciado\n";
        cin >> opcao;
    }

    return opcao;
}

int main(){

    valoridade();
    valorsal();
    estadocivil();

    return 0;
}