#include <iostream>

using namespace std;

int main() {
    float nota;

    cout << "Informe a nota (entre 0 e 10): ";
    cin >> nota;

    while (nota < 0 or nota > 10) {
        cout << "Erro. Nota invalida. Digite novamente: ";
        cin >> nota;
    }

    cout << "Nota valida inserida: " << nota << endl;

    return 0;
}
