/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void impares1a50(){
    for(int i = 1; i<= 50; i++){
        if(i %2 != 0){
            cout << i << endl;
        }
    }
}

int main(){
    impares1a50();
    return 0;
}