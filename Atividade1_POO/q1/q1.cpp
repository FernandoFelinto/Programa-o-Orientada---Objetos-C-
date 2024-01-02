#include<iostream>
#include<string>
using namespace std;

int main(){
string nome;
float salario;
cout << "Nome do funcionário: ";
getline(cin, nome);
cout<<"Digite o salário de "<<nome<<": ";
cin>>salario;
cout<<"******************************"<<endl;
cout<<nome<<": "<<"Salário atual: "<<salario<<endl;
cout<<"Salário com 20% aumento: "<<salario+(salario*0.2)<<endl;

return 0;
}
