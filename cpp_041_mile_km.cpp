// conversor de milhas em km e vice-versa    
// 1 milha = 1.609 kilometers.

#include <iostream>
#include <math.h>

int main() {

    int option = 0;
    float entrada = 0.0;
    float final = 0.0;

    std::cout << "Conversor KM <-> Milhas\n" << " Digite a velocidade de entrada: ";
    std::cin >> entrada;
    std::cout << "Digite: " 
        << "\n1 para converter para milhas" 
        << "\n2 para converter para KM\n";
    std::cin >> option;

    if(option == 1) {
        final = entrada / 1.609;
        std::cout << "Sua velocidade eh " << final << " Milhas por hora";  
    } else if(option == 2) {
        final = entrada * 1.609;
        std::cout << "Sua velocidade eh " << final << " KM por hora";
    } else {
        
        std::cout << "Opcao inválida.";
    }
    


}