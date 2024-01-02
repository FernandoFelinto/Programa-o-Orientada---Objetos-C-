#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    float nota1, nota2, nota3, peso1 = 0.2, peso2 = 0.3, peso3 = 0.5, media;
    cout << setprecision(2) << fixed;
    cout << "Informe a 1ª nota: ";
    cin >> nota1;
    cout << "Informe a 2ª nota: ";
    cin >> nota2;
    cout << "Informe a 3ª nota: ";
    cin >> nota3;

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1+peso2+peso3);
    cout << "A média di aluno é: " << media << endl;
    return 0;
}