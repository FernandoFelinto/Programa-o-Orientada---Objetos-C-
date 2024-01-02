#include<iostream>

int main(){
    float tempreatura_C, temperatura_F;
    std::cout << "Informe a temperatura em C°: ";
    std:: cin >> tempreatura_C;
    temperatura_F = ((tempreatura_C * 9) / 4) + 32;
    std::cout << "A temperatura " << tempreatura_C << "°C = " << temperatura_F << "°F" << std::endl;  
    return 0;
}