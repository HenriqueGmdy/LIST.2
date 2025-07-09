#include <iostream>

using namespace std;

int main(){

float v1 = 0, v2 = 0, v3 = 0;
int tamanho = 0;
float n = 0;


    cout <<"Quantos números serão inseridos?"<<endl;
    cin>> tamanho;
    
    int i = 0;
    while (i < tamanho) {
        
        cout << "Insira o numero: ";
        cin >> n;
        
        if (n > v1) {
        v3 = v2;
        v2 = v1;
        v1 = n;
    } else if (n > v2) {
        v3 = v2;
        v2 = n ;
    } else if (n > v3) {
        v3 = n;
    }
        i++;
    }
    
    float soma = v1 + v2 + v3;
    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    cout << "Soma: " << soma << endl;
  
    return 0;
}