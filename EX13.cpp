#include <iostream>
using namespace std;

int main(){
    int anos = 0;
    float cresA, cresB = 0;
    float paisA = 0;
    float paisB = 0;
    cout<<"Informe a população do país A: "<<endl;
    cin>>paisA;
    cout<<"Informe a população do país B: "<<endl;
    cin>>paisB;
    cout<<"Insira a taxa de crescimento do país A (Em porcentagem):"<<endl;
    cin>>cresA;
    cout<<"Insira a taxa de crescimento do país B (Em porcentagem):"<<endl;
    cin>>cresB;
    
    while (paisA<paisB){
    paisA = paisA *(1+cresA/100);
    paisB = paisB *(1+cresB/100);
    anos++;
    
    }
    cout << "Depois de "<< anos<< " anos o país A alcança o B."<<endl;

    return 0;
}