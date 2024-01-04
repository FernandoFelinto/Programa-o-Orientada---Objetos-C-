#include <iostream>
#include <string>
using namespace std;

float media(float n1, float n2, float n3);
string conceito(float media);

int main(void){
    string nome;
    float nota1, nota2, nota3;
    cout << "Nome do aluno: ";
    cin >> nome;
    setbuf(stdin, NULL); // Limpa o buffer do teclado
    cout << "Informe a 1ª nota: ";
    cin >> nota1;
    cout << "Informe a 2ª nota: ";
    cin >> nota2;
    cout << "Informe a 3ª nota: ";
    cin >> nota3;

    cout << nome << " obteve conceito " << conceito(media(nota1,nota2,nota3)) << endl;
    cout << "As notas fornecidas como entrada foram: " << nota1 <<", "<< nota2 <<" e "<< nota3 <<" com Média Final: "<< media(nota1,nota2,nota3);
    return 0;
}

float media(float n1, float n2, float n3){
    float media = (n1 + n2 + n3) / 3;
    return media;
}
string conceito(float media){
    if (media >= 80){
        return "A";
    } else if(media >= 50 && media < 80){
        return "B";
    } else{
        return "C";
    }
}