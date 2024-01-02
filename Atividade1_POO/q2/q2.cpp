#include<iostream>
#include<string>
using namespace std;

int main(){
    string carro;
    float custo_fabrica, custo_final, porcentagem, impostos;

    cout << "Qual o nome do carro: ";
    cin >> carro;
    cout << "Qual o custo de fábrica: ";
    cin >> custo_fabrica;

    porcentagem = custo_fabrica * 0.1;
    impostos = custo_fabrica * 0.45;
    custo_final = custo_fabrica + porcentagem + impostos;

    cout << "O custo final do " << carro << " é: " << custo_final << endl;
    return 0;
}
