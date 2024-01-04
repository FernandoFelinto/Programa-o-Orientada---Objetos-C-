#include<iostream>
#include<string>
using namespace std;

string eleitor(int idade);

int main(void){
    string nome;
    int idade;

    cout << "Nome do eleitor: ";
    cin >> nome;
    setbuf(stdin, NULL); // limpa o buffer para nomes compostos
    cout << "Qual a sua idade: ";
    cin >> idade;

    cout << nome << ", sua idade é: " << idade << ". \nSua situação eleitoral é: " << eleitor(idade);
return 0;
}

string eleitor(int idade){
    if (idade < 16){
        return "Não eleitor!";
    }else if(idade >= 18 && idade <= 65){
        return "Eleitor Obrigatório!";
    }else{
        return "Eleitor Facultativo!";
    }
}
