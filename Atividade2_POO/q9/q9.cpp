#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float reajuste(float salario);

int main(void){
    string nome;
    float salario_atual;
    cout << "Nome do jogador: ";
    cin >> nome;
    cout << "Qual o salário atual: ";
    cin >> salario_atual;
    cout << "#################################" << endl;
    cout << setprecision(2) << fixed;
    cout << "Jogador: " << nome << endl;
    cout << "Salário Atual: R$ " << salario_atual << endl;
    cout << "Salário Reajustado: R$ " << reajuste(salario_atual) << endl;

    return 0;
}

float reajuste(float salario){
    if (salario <= 1000){
        return salario + (salario*0.3);
    } else if(salario > 1000 && salario <= 1500){
        return salario + (salario*0.2);
    }else if(salario > 1500 && salario <= 2000) {
        return salario + (salario * 0.15);
    }else if(salario > 2000 && salario <= 2500) {
        return salario + (salario * 0.1);
    }else{
        return salario + (salario * 0.05);
    }
}