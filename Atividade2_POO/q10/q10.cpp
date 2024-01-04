#include <iostream>
#include <string>
using namespace std;

string classe(int pecas);
float salario_calculado(string classe, float salario_minimo);

int main(){
    int pecas;
    float salario_minimo;
    string nome;
    cout << "Digite o nome do funcionário: ";
    cin >> nome;
    cout << "Digite o número de peças produzidas: ";
    cin >> pecas;
    cout << "Qual o valor do salário mínimo: R$ ";
    cin >> salario_minimo;
    cout << "##################################" << endl;
    cout << "Funcionário: " << nome << endl;
    cout << "Salário Mínimo (R$): " << salario_minimo << endl;
    cout << "Número de peças fabricadas: " << pecas << endl;
    cout << "Classe: " << classe(pecas) << endl;
    cout << "Salário atual calculado (R$): " << salario_calculado(classe(pecas),salario_minimo)<< endl;
    return 0;
}

string classe(int pecas){
    if(pecas <= 30){
        return "C";
    } else if(pecas > 30 && pecas <= 44){
        return "B";
    } else{
        return "A";
    }
}
float salario_calculado(string classe, float salario_minimo){
    if(classe == "A"){
        return salario_minimo + (salario_minimo*0.15);
    } else if(classe == "B"){
        return salario_minimo + (salario_minimo*0.05);
    } else{
        return salario_minimo;
    }
}