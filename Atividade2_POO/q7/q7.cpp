#include <iostream>
using namespace std;

int maior(int n1, int n2, int n3);

int main(){
    int num1, num2, num3;
    cout << "1º Número: ";
    cin >> num1;
    cout << "2º Número: ";
    cin >> num2;
    cout << "3º Número: ";
    cin >> num3;
    cout<< "O maior número é: " << maior(num1,num2,num3)<<endl;
    return 0;
}

int maior(int n1, int n2, int n3){
    if (n1 > n2 && n1 > n3){
        return n1;
    } else if(n2 > n1 && n2 > n3){
        return n2;
    } else if(n3 > n1 && n3 > n2){
        return n3;
    } else{
        cout<<"Os números são iguais!" << endl;
    }
}