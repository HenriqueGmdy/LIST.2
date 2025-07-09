
#include <iostream>
using namespace std;


int main(){
    int num1, num2 = 0;
    int i;
    int aux;
    
    cout << "Insira o primeiro número:"<<endl;
    cin >> num1;
    cout << "Insira o segundo número:"<<endl;
    cin >> num2;
    
    if (num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    
    for (i= num1 + 1; i < num2; i++){
        cout << i<< endl;
    }
    
    return 0;
}