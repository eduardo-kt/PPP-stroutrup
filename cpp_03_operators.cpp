#include <iostream>
#include <cmath>

int main() {
    std::cout << "Entre com um numero decimal: ";
    double decimal = 0;
    std::cin>> decimal;
    std::cout << "n == " << decimal 
        <<"\nn*2 == " << decimal * 2
        <<"\nn/2 == " << decimal / 2
        <<"\nraiz quadrada == " << sqrt(decimal)
        // conversão pra inteiro
        <<"\nresto da divisao por 2 == " << static_cast<int>(decimal) % 2; 


}