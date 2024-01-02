#include<iostream>
using namespace std;

int main(){
    int numero, cubo;
    cout << "Digite um número inteiro: ";
    cin >> numero;
    cubo = numero*numero*numero;
    cout << "O cubo de " << numero << " é: " << cubo << endl;;

    return 0;
}