# include<iostream>
#include<string>
#include<iomanip>
using namespace std; 

int main(){

int matricula;
string nome;
float salario_bruto, salario_liquido, desconto_inss = 0.15;

cout << "Qual a matrícula do funcionário: " << endl;
cin >> matricula;
cout << "Qual o nome do funcionário: " << endl;
cin >> nome;
cout << "Qual o salário bruto do funcionário: " << endl;
cin >> salario_bruto;

salario_liquido = salario_bruto - (salario_bruto * desconto_inss);

cout << "********** CONTRACHEQUE **********" << endl;
cout << "Matrícula: " << matricula << endl;
cout << "Nome Completo: " << nome << endl;
cout << setprecision(2) << fixed;
cout << "Salário Bruto: " << salario_bruto << endl;
cout << "Dedução INSS: " << desconto_inss * 100 << "%" << endl;
cout << "Salário Líquido: " << salario_liquido << endl;

    return 0;
}