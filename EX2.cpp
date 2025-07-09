#include <iostream>
using namespace std;




int main(){
    int n, num, maior;

    cout << "Quantos números serão inseridos?" << endl;
    cin >> n;
    
    if (n<=0){
        cout <<"Quantidade inválida"<<endl;
        return 0;
    }
    
    cout << "Digite o primeiro número: "<<endl;
    cin >> num;
    maior = num;
    
    for (int i = 2; i<= n; i++){
        cout << "Digite o termo "<< i<<": ";
        cin >> num;
        
        if (num>maior){
            maior = num;
        }
    }
    cout << "O maior número é: "<< maior <<endl;
    return 0;
}