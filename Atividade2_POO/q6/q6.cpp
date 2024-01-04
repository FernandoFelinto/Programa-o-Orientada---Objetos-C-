#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float preco_kwh(int consumo);
float kwh(int consumo);

int main(void){
string nome;
int consumo;
cout << "Nome do cliente: ";
cin >> nome;
setbuf(stdin, NULL);
cout << "Total consumido: ";
cin >> consumo;
cout << "############################"<< endl;
cout << setprecision(2) << fixed;
cout << "Consumidor: " << nome << endl;
cout << "Consumo mensal: " << consumo <<" Kw/h"<<endl;
cout << "Preço do Kw/h em R$: "<<kwh(consumo) <<endl;
cout << "Total a pagar R$: " << preco_kwh(consumo);
    return 0;
}

float preco_kwh(int consumo){
    if (consumo >= 300){
        float preco = consumo * 1;
        return preco;
    } else if(consumo >= 200 && consumo < 300){
        float preco = consumo * 0.8;
        return preco;
    }else{
        float preco = consumo * 0.2;
        return preco;
    }
}

float kwh(int consumo){
    if (consumo >= 300){
        return 1;
    } else if(consumo >= 200 && consumo < 300){
        return 0.8;
    } else{
        return 0.2;
    }
}
