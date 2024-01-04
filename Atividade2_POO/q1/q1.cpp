#include <iostream>
#include <iomanip>
using namespace std;

float maca(int quantidade);

int main(){
int quant;
float preco;
cout << "Digite a quantidade de maçãs: ";
cin >> quant;
cout << setprecision(2) << fixed;
cout << "Valor à pagar: R$ " << maca(quant) << endl;
    return 0;
}

float maca(int quantidade){
    float preco;
    if (quantidade < 12){
        preco = quantidade*1.5;
        return preco;
    } else{
        preco = quantidade*1.1;
        return preco;
    }
}