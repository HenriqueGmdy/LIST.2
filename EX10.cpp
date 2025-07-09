#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string login;
    string senha;
    
    cout<<"Login: "<<endl;
    cin>> login;
    cout<<"Senha: "<<endl;
    cin>> senha;
    
    while (login == senha){
        cout << "O login não pode ser igual à senha."<<endl;
        cout<<"Login: "<<endl;
        cin>> login;
        cout<<"Senha: "<<endl;
        cin>> senha;
    }
    
    cout<<"Olá "<<login<<endl;
    return 0;
}
