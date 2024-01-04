#include <iostream>
#include <string>
using namespace std;

string numero(int num);

int main(void){
    int n;
    cout <<"Digite um número inteiro: ";
    cin >> n;
    cout << numero(n) << endl;
    return 0;
}

string numero(int num){
    if (num > 0){
        return "O número é maior que zero!";
    } else if(num < 0){
        return "O número é menor que zero!";
    } else{
        return "O número é igual a zero";
    }
}