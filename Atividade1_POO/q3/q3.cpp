#include<iostream>
#include<string>

int main(){
std::string nome;
int idade;
long long int idade_segundos;

std::cout << "Qual o seu nome: ";
std::cin >> nome;
std::cout << "Qual a sua idade: ";
std::cin >> idade;
idade_segundos = idade * 31536000;
std::cout << nome<<" - Sua idade em segundos é: "<< idade_segundos << std::endl;
return 0;
}
