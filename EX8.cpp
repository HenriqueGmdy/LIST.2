#include <iostream>

using namespace std;

int main(){
    float nota =0;
    
    for(float nota = 0; nota>=0; nota++){
        cout << "Informe a nota: "<<endl;
        cin >> nota;
        cout << "Nota inserida: "<<nota<<endl;
    }

    return 0;
}