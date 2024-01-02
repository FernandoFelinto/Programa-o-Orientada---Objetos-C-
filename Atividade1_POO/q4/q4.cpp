#include<iostream>
#include<iomanip>
using namespace std;

int main(){
float quant_reais, preco_litro, litros_comb;
cout<<setprecision(2) << fixed;
cout << "Informe a quantidade em reais R$ do abastecimento: ";
cin >> quant_reais;
cout << "Informe o preço do litro: ";
cin >> preco_litro;
litros_comb = quant_reais/preco_litro;
cout << "Você colocou "<< litros_comb<<" litros no seu veículo!"<<endl;
return 0;
}
