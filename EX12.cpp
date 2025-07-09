#include <iostream>
using namespace std;

int main(){
    int anos = 0;
    float paisA = 80000;
    float paisB = 200000;
    
    while (paisA<paisB){
    paisA = paisA * 1.03;
    paisB = paisB * 1.015;
    anos++;
    
    }
    cout << "Depois de "<< anos<< " o país A alcança o B."<<endl;

    return 0;
}