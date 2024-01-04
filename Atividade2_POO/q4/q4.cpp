#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float imc(float peso, float altura);

string resultado(float imc);

int main(void){
    float peso, altura;
    cout << "Digite o seu peso(Kg): ";
    cin >> peso;
    cout << "Digite a sua altura(m): ";
    cin >> altura;
    cout << setprecision(2)<<fixed;
    cout << "Seu IMC é de: " << imc(peso, altura) << endl;
    cout << resultado(imc(peso,altura));

    return 0;
}

float imc(float peso, float altura){
    float imc = peso / (altura * altura);
    return imc;
}
string resultado(float imc){
    if (imc < 18.5){
        return "Você está abaixo do seu peso ideal!";
    }else if (imc >= 18.5 && imc < 25){
        return "Parabéns! Você está no seu peso ideal!";
    }else if (imc >= 25 && imc < 30){
        return "Você está acima do seu peso! (Sobrepeso)";
    }else if (imc >= 30 && imc < 35){
        return "Obesidade grau 1!";
    }else if (imc >= 35 && imc < 40){
        return "Obesidade grau 2!";
    } else{
        return "Obesidade grau 3!";
    }
}