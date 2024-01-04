#include <iostream>
using namespace std;

float base_calculo(float salario, int dependentes){
   if (salario <= 900.8){
       float base_calculo = salario - (dependentes*90) - 0;
       return base_calculo;
   }else if(salario > 900.8 && salario <= 1800.5){
       float base_calculo = salario - (dependentes*90) - 135;
       return base_calculo;
   } else{
       float base_calculo = salario - (dependentes*90) - 315;
       return base_calculo;
   }
}
float imposto_renda(float base_calculo,float salario){
    if (salario <= 900.8){
        float imp_renda = (base_calculo * 0) - 0;
        return imp_renda;
    }else if(salario > 900.8 && salario <= 1800.5){
        float imp_renda = (base_calculo * 0.15) - 135;
        return imp_renda;
    } else{
        float imp_renda = (base_calculo * 0.275) - 315;
        return imp_renda;
    }
}

int main(void){
int dependentes;
float salario;
cout << "Qual o seu salário bruto: R$ ";
cin >> salario;
cout << "Quantos dependentes você possui: ";
cin >> dependentes;
cout << "Você deve pagar de Imposto de Renda: R$ " << imposto_renda(base_calculo(salario, dependentes),salario) << endl;
    return 0;
}